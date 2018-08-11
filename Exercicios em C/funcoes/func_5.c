/* 5 - O cardápio de uma lancheria é o seguinte:
Código do lanche Especificação Preço unitário
100 Cachorro quente 11,00
101 Bauru simples 13,00
102 Bauru c/ovo 15,00
103 Hamburger 11,00
104 Cheeseburger 13,00
105 Refrigerante 3,00

O programa deverá apresentar as seguintes opcoes:
A - Novo pedido (Zerar Valor total do pedido)
B - Incluir Item e quantidade
C - Fechar pedido e Imprimir total (Apenas valor, somar total ao total do dia)
D - Total do Dia (apenas valor)
E - SAIR do programa
O Programa deverá ter uma função que receba como parametros o codigo do item e a quantidade, esta funcao deverá retornar o valor daquela quantidade de items. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcula_item (int cod, int qtde){
	float v_unit;
	switch (cod) {
		case 100: v_unit=11; break;
		case 101: v_unit=13; break;
		case 102: v_unit=15; break;
		case 103: v_unit=11; break;
		case 104: v_unit=13; break;
		case 105: v_unit=3; break;
		default: v_unit=0;
	}
	return v_unit*qtde;

}

int main (int argc, char** argv){
	setlocale (LC_ALL, "Portuguese");
	int cod, qtde; 
	char opcao;
	float total_item, total_ped=0, total_dia=0;
	
	do{
	printf ("Digite a opção: \nA- Novo Pedido \nB- Incluir Item \nC- Fechar Pedido \nD- Fechar Dia.\nE- SAIR\n");
	scanf ("%c", &opcao);
	switch (opcao){
		case 'a': total_ped=0; break;
		case 'b': 
			printf ("digite o código do item: ");
			scanf ("%d", &cod);
			printf ("digite a quantidade: ");
			scanf ("%d", &qtde); getchar();
			total_item = calcula_item (cod, qtde);
			printf("Total do ítem: R$%.2f", total_item);
			total_ped=total_ped + total_item;
			break;
		case 'c': 
			printf ("Total do pedido: R$%.2f", total_ped);
			total_dia=total_dia + total_ped;
			break;
		case 'd': printf ("Total do dia: R$%.2f", total_dia); break;	
	}	

	}while (opcao!='e');
    return (EXIT_SUCCESS);
}




/* 6- CAIXA ELETR�NICO. 
Escrever um programa que l� um valor inteiro em reais
e calcula qual o menor n�mero poss�vel de notas de 100, 50, 20, 10, 5, 2 e 1 
em que o valor lido pode ser entregue ao cliente. 
Escrever a rela��o de notas necess�rias. 
Utilize um vetor para armazenar o valor de cada tipo de nota. Notas = {100, 50, 20, 10, 5, 2, 1}
*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int notas []={100,50,20,10,5,2,1};
	int saque, i, saldo, cedulas;
	
	printf ("Digite o valor do saque:\nR$");
	scanf ("%d", &saque);
	saldo=saque;
	printf("\nTroco:\n");
	
	for (i=0; i<7; i++){
		cedulas= saldo/notas[i];
		printf("%d c�dulas de R$%d\n", cedulas, notas[i]);
		saldo=saldo-cedulas*notas[i];
	}
}

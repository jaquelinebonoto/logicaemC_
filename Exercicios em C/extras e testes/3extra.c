/* 4 - Calculadora2: Escreva um programa onde o usu�rio poder� escolher uma das op��es:
a - Soma (ler operador 1 e operador 2)
b - Subtra��o (ler operador 1 e operador 2)
c - Divis�o (ler base e divisor)
d - Multiplica��o (ler base e multiplicador)
e - Fatorial
f - Potencia (ler base e potencia)
G - SAIR */

#include <stdio.h>
#include <locale.h>
int soma (int num1, int num2) {
	return (num1+num2);
}
int sub (int num1, int num2) {
	return (num1-num2);
}
int div (int num1, int num2) {
	return (num1/num2);
}
int mult (int num1, int num2) {
	return (num1*num2);
}
int fat (int num) {
		int fat=1, x;
		for (x=1; x <= num; x++){
		fat=fat*x;    
	}
	return (fat);
}
        
int pot (int num1, int num2) {
	return (pow(num1, num2));
}



int main () {
	setlocale (LC_ALL, "Portuguese");
	int n1, n2, escolha;
	
	printf ("Escolha a fun��o que voc� deseja aplicar na sua calculadora:\n");
	scanf ("%d", &escolha);
	switch (escolha) {
        case 1:
        	printf ("Informe dois valores:");
        	scanf ("%d %d", &n1, &n2);
            printf("Soma: %d", soma(n1,n2));
			break;
		case 2:
			printf ("Informe dois valores:");
        	scanf ("%d %d", &n1, &n2);
		    printf("Subtra��o: %d", sub(n1,n2));
			break;
		case 3:
			printf ("Informe dois valores:");
        	scanf ("%d %d", &n1, &n2);
		    printf("Divis�o: %d", div(n1,n2));
			break;
		case 4:
			printf ("Informe dois valores:");
        	scanf ("%d %d", &n1, &n2);
		    printf("Multiplica��o: %d", mult(n1,n2));break;
		case 5:
			printf ("Informe um valor:");
        	scanf ("%d", &n1);
		    printf("Fatorial: %d", fat(n1));
			break;
		case 6:
			printf ("Informe dois valores:");
        	scanf ("%d %d", &n1, &n2);
		    printf("Pot�ncia: %d", pot(n1,n2));
			break;	
		case 7: 
			printf ("SAIR"); break;		
		
	}

}

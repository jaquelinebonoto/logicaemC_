/*2 - Escreva um programa que leia 3 n�meros. 
O programa deve apresentar a soma e o produto dos 3 n�meros. 
O programa deve ter uma fun��o que recebe os tr�s n�meros e retorna a soma, e outra fun��o que recebe os tr�s n�meros e retorna o produto. */

#include <stdio.h>
#include <locale.h>

int soma (int val1, int val2,int val3){
	return (val1+val2+val3);
}

int mult (int val1, int val2,int val3){
	return (val1*val2*val3);
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int n1, n2, n3;
	
	printf ("Digite o valor 1:\n");
	scanf ("%d", &n1);
	
	printf ("Digite o valor 2:\n");
	scanf ("%d", &n2);
	
	printf ("Digite o valor 3:\n");
	scanf ("%d", &n3);
	
	printf ("Sua soma: %d\n", soma(n1,n2,n3));
	printf ("Sua multiplica��o: %d\n", mult(n1,n2,n3));	
	
}

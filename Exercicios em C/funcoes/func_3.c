/*3 - Escreva um programa que apresente leia dois n�meros e apresente as seguintes op��es:
A - Somar 2 n�meros
B - Multiplicar 2 n�meros
C - Dividir 2 N�meros
D -  Subtrair 2 N�meros

Cada um dos items deve ser uma fun��o */

#include <stdio.h>
#include <locale.h>

int soma (int val1, int val2){
	return (val1+val2);
}

int mult (int val1, int val2){
	return (val1*val2);
}

int div (int val1, int val2){
	return (val1/val2);
}

int sub (int val1, int val2){
	return (val1-val2);
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int n1, n2;
	
	printf ("Digite o valor 1:\n");
	scanf ("%d", &n1);
	
	printf ("Digite o valor 2:\n");
	scanf ("%d", &n2);
		
	printf ("Sua soma: %d\n", soma(n1,n2));
	printf ("Sua multiplica��o: %d\n", mult(n1,n2));	
	printf ("Sua divis�o: %d\n", div(n1,n2));
	printf ("Sua subtra��o: %d\n", sub(n1,n2));
	
}

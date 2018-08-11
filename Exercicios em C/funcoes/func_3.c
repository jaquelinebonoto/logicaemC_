/*3 - Escreva um programa que apresente leia dois números e apresente as seguintes opções:
A - Somar 2 números
B - Multiplicar 2 números
C - Dividir 2 Números
D -  Subtrair 2 Números

Cada um dos items deve ser uma função */

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
	printf ("Sua multiplicação: %d\n", mult(n1,n2));	
	printf ("Sua divisão: %d\n", div(n1,n2));
	printf ("Sua subtração: %d\n", sub(n1,n2));
	
}

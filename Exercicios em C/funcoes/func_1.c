/* 1 - Escreva um programa que leia um n�mero e escreva este n�mero elevado ao quadrado.
O programa deve ter uma fun��o que recebe um n�mero como par�metro e retorne este n�mero elevado ao quadrado */

#include <stdio.h>
#include <locale.h>

int quad (int num){
	return (num*num);
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int valor;
	
	printf ("Digite um valor:\n");
	scanf ("%d", &valor);
	
	printf ("Seu quadrado: %d", quad(valor));	
	
}

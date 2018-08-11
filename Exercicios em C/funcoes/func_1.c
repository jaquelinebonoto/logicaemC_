/* 1 - Escreva um programa que leia um número e escreva este número elevado ao quadrado.
O programa deve ter uma função que recebe um número como parâmetro e retorne este número elevado ao quadrado */

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

/* 2 - Escreva um programa que leia 10 números inteiros. 
          Apresente a soma dos 10 números.  */


#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int vet [10];
	int i, soma=0;
	
	for (i=0; i<10; i++){
		printf ("Digite o valor %d:\n", i);
		scanf ("%d", &vet[i]);
		soma= soma+ vet[i];
	}
	printf ("A soma dos valores informados é:%d", soma);	
}

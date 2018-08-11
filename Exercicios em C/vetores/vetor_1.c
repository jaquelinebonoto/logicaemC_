/* Escreva um programa que leia 10 números inteiros. 
Escrevas os 10 números na ordem correta e 
depois os 10 números na ordem inversa (da posição 10 para a primeira). */


#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int vet [10];
	int i;
	
	for (i=1; i<=10; i++){
		printf ("Digite o Número de posção %d:\n", i);
		scanf ("%d", &vet[i]);
	}
	printf ("\nSeu vetor:\n");
	for (i=1; i<=10; i++){
		printf ("Número %d:%d\t\n", i, vet[i]);
	}
	
	printf ("\nSeu vetor em ordem inversa:\n");
	for (i=10; i>0; i--){
		printf ("Número %d:%d\t\n", i, vet[i]);
	}
	
}

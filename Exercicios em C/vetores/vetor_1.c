/* Escreva um programa que leia 10 n�meros inteiros. 
Escrevas os 10 n�meros na ordem correta e 
depois os 10 n�meros na ordem inversa (da posi��o 10 para a primeira). */


#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int vet [10];
	int i;
	
	for (i=1; i<=10; i++){
		printf ("Digite o N�mero de pos��o %d:\n", i);
		scanf ("%d", &vet[i]);
	}
	printf ("\nSeu vetor:\n");
	for (i=1; i<=10; i++){
		printf ("N�mero %d:%d\t\n", i, vet[i]);
	}
	
	printf ("\nSeu vetor em ordem inversa:\n");
	for (i=10; i>0; i--){
		printf ("N�mero %d:%d\t\n", i, vet[i]);
	}
	
}

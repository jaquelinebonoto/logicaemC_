/* Escreva um programa que leia 10 números reais. Apresente o resultado da  multiplicação destes.   */


#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int vet [10];
	int i, mult=1;
	
	for (i=0; i<10; i++){
		printf ("Digite o valor %d:\n", i);
		scanf ("%d", &vet[i]);
		mult= mult* vet[i];
	}
	printf ("A multiplicação dos valores informados é:%d", mult);	
}

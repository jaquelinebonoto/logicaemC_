/* 1 - Escreva um programa que leia uma Matriz de inteiros 2x5. (duas linhas e cinco colunas) 
a - Crie uma Fun��o que recebe como parametro o numero da linha e calcula a soma da linha; Indique a soma da linha 1 e da linha 2;
b - Usando a Fun��o definida em "a" fa�a uma fun��o que calcule a soma dos elementos da matriz;

c - Escreva uma fun��o que mostre os 10 numeros,5 numeros por linha, de acordo com a ordem da matriz;

d - Escreva uma fun��o que retorne o maior n�mero da matriz.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somalinha (){
	int i
}

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	int x[2][5];
	int i, j;
	
	
	printf ("Informe 10 valores inteiros para sua matriz 2x5:\n");
	for (i=0; i<2; i++){
		for (j=0; j<5; j++){
			scanf("%d", &x[i][j]);
		}
	}
	
	for (i=0; i<2; i++){
		for (j=0; j<5; j++){
			printf("%d", x[i][j]);
		}
	}
	

	
    return (EXIT_SUCCESS);
}


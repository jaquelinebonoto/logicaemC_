/* 1 - Fa�a um programa que carregue uma matriz 3x3 de numeros inteiros. Calcule:
a - o maior n�mero
b - o menor n�mero
c - a m�dia dos n�meros
d - a soma da linha 1
e - o produto (multiplicacao) da diagonal principal
*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int M [3][3];
	int maior, menor, media, soma, somalinha=0, diag=1, diagsec=1;
	
	int x,y=0;
	
	printf("Informe 9 valores para a matriz\n");
	for (x=0; x<3; x++)
		for (y=0; y<3; y++){
		scanf ("%d", &M[x][y]);
		soma=soma+M[x][y];
		}
	
	printf("Sua matriz:\n");
	for (x=0; x<3; x++)
		for (y=0; y<3; y++){
		printf ("%d\n", M[x][y]);
		}
		
	maior = M[0][0];
	menor = M[0][0];
	media=soma/9;
	for (x=0; x<3; x++)
		for (y=0; y<3; y++){
			if(maior<M[x][y]){
				maior=M[x][y];
			}
			if(menor>M[x][y]){
				menor=M[x][y];
			}
		}	
	for (y=0; y<3; y++){
		somalinha = somalinha + M[0][y];
		diag = diag * M[y][y];
		diagsec = diagsec * M[y][2-y];
	}
	
	printf ("Maior n�mero: %d\nMenor n�mero: %d\nM�dia: %d\nSoma da linha 1: %d\nProduto da diagonal principal: %d\nProduto da diagonal sec: %d", maior, menor, media, somalinha, diag, diagsec);
}

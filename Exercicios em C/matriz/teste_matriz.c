/* 1 - Faça um programa que carregue uma matriz 3x3 de numeros inteiros. Calcule:
a - o maior número
b - o menor número
c - a média dos números
d - a soma da linha 1
e - o produto (multiplicacao) da diagonal principal
*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int M [3][3];
	int maior, menor, media, soma, produto;
	
	int x,y=0;
	
	for (x=0; x<3; x++, y++){
		M[x][y]=x*y;
	}
	
	
	
}

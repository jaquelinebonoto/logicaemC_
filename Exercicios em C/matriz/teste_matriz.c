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
	int maior, menor, media, soma, produto;
	
	int x,y=0;
	
	for (x=0; x<3; x++, y++){
		M[x][y]=x*y;
	}
	
	
	
}

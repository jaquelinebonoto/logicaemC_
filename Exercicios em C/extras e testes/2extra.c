/*2 - Fa�a um programa que carregue uma matriz 3x3 de numeros inteiros.
Escreva uma fun��o para cada c�lculo:
a - o maior n�mero 
b - o menor n�mero
c - a soma da linha 1
Escreva uma fun��o para que ESCREVA os seguintes valores:
d - a m�dia dos n�meros
e - o produto (multiplicacao) da diagonal principal*/

#include <stdio.h>
#include <locale.h>

int i, j;

int maior (int a[3][3]){
	int maior=a[0][0];
	for (i=0; i<3; i++)
		for (j=0; j<3; j++){
			if(a[i][j]>maior){
				maior=a[i][j];
			} 
	}
	return (maior);
}

int menor (int a[3][3]){
	int menor=a[0][0];
	for (i=0; i<3; i++)
		for (j=0; j<3; j++){
			if (a[i][j]<menor){
				menor=a[i][j];
			}
	}
	return (menor);
}

int sl (int a[3][3]){
	int sl=0;
	for (j=0; j<3; j++){
			sl = sl + a[0][j];
		}
	return (sl);
}
	


int main () {
	setlocale (LC_ALL, "Portuguese");
	int m[3][3];
	
	for (i=0; i<3; i++)
		for (j=0; j<3; j++){
			printf ("Informe um valor para a posi��o [%d,%d]:", i, j);
			scanf ("%d", &m[i][j]);
	}
	printf ("O maior valor da matriz �: %d\n", maior(m));
	printf ("O menor valor da matriz �: %d\n", menor(m));
	printf ("A soma da linha 1 � igual a: %d\n", sl(m));
	
}

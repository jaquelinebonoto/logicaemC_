/*2 - Faça um programa que carregue uma matriz 3x3 de numeros inteiros.
Escreva uma função para cada cálculo:
a - o maior número 
b - o menor número
c - a soma da linha 1
Escreva uma função para que ESCREVA os seguintes valores:
d - a média dos números
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
			printf ("Informe um valor para a posição [%d,%d]:", i, j);
			scanf ("%d", &m[i][j]);
	}
	printf ("O maior valor da matriz é: %d\n", maior(m));
	printf ("O menor valor da matriz é: %d\n", menor(m));
	printf ("A soma da linha 1 é igual a: %d\n", sl(m));
	
}

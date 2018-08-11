/* 2 - Escreva um programa que leia 3 números. 
O programa deve apresentar a soma e o produto dos 3 números. 
O programa deve ter uma função que recebe os três números e retorna a soma, e outra função que recebe os três números e retorna o produto. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma (float a, float b, float c){
	return a+b+c;
}

float produto (float a, float b, float c){
	return a*b*c;
}

int main (int argc, char** argv) {
	float x,y,z; float mult;
	printf ("Digite o primeiro número: ");
	scanf ("%f", &x);
	printf ("Digite o segundo número: ");
	scanf ("%f", &y);
	printf ("Digite o terceiro número: ");
	scanf ("%f", &z);	
	
	printf ("Resultado da soma: %.2f\n", soma(x,y,z));
	mult=produto(x,y,z); //Aqui podia ser igual a linha 25, mas foi passado uma maneira de realizar a função dentro do main mesmo
	printf("Resultado da Multiplicação: %.2f\n", mult);
		
    return (EXIT_SUCCESS);
}


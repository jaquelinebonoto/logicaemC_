/* 2 - Escreva um programa que leia 3 n�meros. 
O programa deve apresentar a soma e o produto dos 3 n�meros. 
O programa deve ter uma fun��o que recebe os tr�s n�meros e retorna a soma, e outra fun��o que recebe os tr�s n�meros e retorna o produto. */

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
	printf ("Digite o primeiro n�mero: ");
	scanf ("%f", &x);
	printf ("Digite o segundo n�mero: ");
	scanf ("%f", &y);
	printf ("Digite o terceiro n�mero: ");
	scanf ("%f", &z);	
	
	printf ("Resultado da soma: %.2f\n", soma(x,y,z));
	mult=produto(x,y,z); //Aqui podia ser igual a linha 25, mas foi passado uma maneira de realizar a fun��o dentro do main mesmo
	printf("Resultado da Multiplica��o: %.2f\n", mult);
		
    return (EXIT_SUCCESS);
}


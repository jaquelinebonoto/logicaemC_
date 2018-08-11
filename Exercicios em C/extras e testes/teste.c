/* Escreva um algoritmo que imprima numeros de 1 a 10. */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char** argv) {

	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	for (cont=1; cont<=10; cont++){
		printf (" %d\n", cont);
	}	
	
	
}

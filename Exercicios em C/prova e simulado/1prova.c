#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(void){

	setlocale(LC_ALL, "Portuguese");
	
	int num, i, div;
	
	do{
	printf ("Informe um valor inteiro e positivo: ");	
	scanf ("%d", &num);
	
	if (num%2!=0){
		for (i==1; i==num; num++){
			if (num%i==0){
			printf ("%d é divisor", i);
			div = div + 1;
			}
		}
	}
	
	} while (num!=0);
}

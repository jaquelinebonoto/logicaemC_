/* 1 - Escreva um programa que leia um n�mero e escreva este n�mero elevado ao quadrado.
O programa deve ter uma fun��o que recebe um n�mero como par�metro e retorne este n�mero elevado ao quadrado
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
    int quad (int num){
    return(num * num);   
    }
    int valor;
    printf ("Digite um valor: ");
    scanf("%d",&valor);
    printf("O quadrado é %d", quad(valor));
    return (EXIT_SUCCESS);
}


/* 1 - Escreva um programa que leia um número e escreva este número elevado ao quadrado.
O programa deve ter uma função que recebe um número como parâmetro e retorne este número elevado ao quadrado
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
    printf("O quadrado Ã© %d", quad(valor));
    return (EXIT_SUCCESS);
}


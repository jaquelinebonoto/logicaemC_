/*5 - Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
 */

/* 
 * File:   main.c
 * Author: 0783170
 *
 * Created on 31 de Agosto de 2017, 08:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n1,n2,n3;
    printf("Digite um numero inteiro:");
    scanf("%d",&n1);
    printf("Digite mais um numero inteiro:");
    scanf("%d",&n2);
    printf("Digite mais um numero inteiro:");
    scanf("%d",&n3);
    if ((n1>n2) && (n1>n3))
        printf("O maior numero e:%d",n1);
    else if ((n2>n3) && (n2>n1))
        printf("O maior numero e:%d",n2);
    else if ((n3>n1) && (n3>n2))
        printf("O maior numero e:%d",n3);
       
    return (EXIT_SUCCESS);
}


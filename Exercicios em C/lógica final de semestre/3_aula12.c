/* 3 - Escreva um programa que apresente leia dois números e apresente as seguintes opções:
A - Somar 2 números
B - Multiplicar 2 números
C - Dividir 2 Números
D -  Subtrair 2 Números

Cada um dos items deve ser uma função 
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int soma (int num1, int num2){
    return(num1+num2);   
    }
    int mult (int num1, int num2){
    return(num1*num2);   
    }
    float divis (float num1, float num2){
    return(num1/num2);   
    }
    int sub (int num1, int num2){
    return(num1-num2);   
    }

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
    int n1,n2,escolha;
    printf("Digite dois nÃºmeros inteiros:\n");
    scanf("%d\t%d",&n1,&n2);
    printf("Digite 1 para soma, 2 para multiplicão, 3 para divisão e 4 para subtração\n");
    scanf("%d",&escolha);
    switch (escolha){
        case 1:
            printf("Soma: %d", soma(n1,n2));break;
        case 2:
            printf("Multiplicação: %d", mult(n1,n2));break;
        case 3:
            printf("Divisão: %f",divis(n1,n2));break;
        case 4:
            printf("Subtração: %d", sub(n1,n2));break;
    }
    return (EXIT_SUCCESS);
}


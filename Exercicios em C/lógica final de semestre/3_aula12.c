/* 3 - Escreva um programa que apresente leia dois n�meros e apresente as seguintes op��es:
A - Somar 2 n�meros
B - Multiplicar 2 n�meros
C - Dividir 2 N�meros
D -  Subtrair 2 N�meros

Cada um dos items deve ser uma fun��o 
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
    printf("Digite dois números inteiros:\n");
    scanf("%d\t%d",&n1,&n2);
    printf("Digite 1 para soma, 2 para multiplic�o, 3 para divis�o e 4 para subtra��o\n");
    scanf("%d",&escolha);
    switch (escolha){
        case 1:
            printf("Soma: %d", soma(n1,n2));break;
        case 2:
            printf("Multiplica��o: %d", mult(n1,n2));break;
        case 3:
            printf("Divis�o: %f",divis(n1,n2));break;
        case 4:
            printf("Subtra��o: %d", sub(n1,n2));break;
    }
    return (EXIT_SUCCESS);
}


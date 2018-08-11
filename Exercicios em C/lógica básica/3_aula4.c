/* 3 - Faça um programa que leia a média do aluno e seu numero de faltas.
 * se as faltas forem maior ou igual a 5, escreva 'reprovado por faltas'.
 * Se a média for menor que 7, foi reprovado por média. Senão,
 * escreva 'Parabéns! você foi aprovado'.
 */

/*
 * File:   main.c
 * Author: 0783170
 *
 * Created on 24 de Agosto de 2017, 11:18
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int faltas;
    float media;

    printf("Digite a media de notas:");
    scanf("%f",&media);
    printf("\nDigite o numero de faltas:");
    scanf("%d",&faltas);
    if (faltas>=5)
        printf("\nReprovado por faltas!");
    else if (media<7)
        printf("\nReprovado por media");
    else
        printf("\nAprovado!!");
    return (EXIT_SUCCESS);
}


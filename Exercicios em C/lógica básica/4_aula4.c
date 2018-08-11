/* 4 - Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
 * infantil A = 5 - 7 anos
 * infantil B = 8-10 anos
 * juvenil A = 11-13 anos
 * juvenil B = 14-17 anos
 * adulto = 18 anos ou mais
 */

/*
 * File:   main.c
 * Author: 0783170
 *
 * Created on 24 de Agosto de 2017, 11:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {
    int idade;

    printf("Digite a idade do nadador:");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Adulto.");
    } else {
        if (idade > 13) {
            printf("Juvenil B.");
        } else {
            if (idade > 10) {
                printf("Juvenil A.");
            } else {
                if (idade > 7) {
                    printf("Infantil B");
                } else {
                    if (idade >= 5) {
                        printf("Infantil A");
                    } else
                        printf("Muito jovem.");
                }
            }
        }
    }
    return (EXIT_SUCCESS);
}


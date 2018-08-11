/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: 0783170
 *
 * Created on 24 de Agosto de 2017, 10:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {
    float n1,n2,n3,media;
    printf("Digite nota 1:");
    scanf("%f",&n1);
    printf("\nDigite nota 2:");
    scanf("%f",&n2);
    printf("\nDigite nota 3:");
    scanf("%f",&n3);
    media=(n1+n2+n3)/3.0;
        if (media>=7)
            printf("Aprovado!");
        else
            printf("Reprovado.");
    return (EXIT_SUCCESS);
}


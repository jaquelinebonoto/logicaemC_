/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Extra4.c
 * Author: PC
 *
 * Created on 8 de Setembro de 2017, 20:47
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d",&numero);
    if ((numero%2)==0)
            printf ("Verdadeiro");
    else 
        printf("Falso");
            
    return (EXIT_SUCCESS);
}


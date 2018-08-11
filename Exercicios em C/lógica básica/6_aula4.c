/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: 0783170
 *
 * Created on 31 de Agosto de 2017, 09:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    printf("digite um numero:");
    scanf("%d", &num);
    printf("O numero %d eh", num);
    if (num % 2 == 0)
        printf(" par");
    else
        printf(" impar");
    if (num < 0)
        printf(" e negativo.");
    else
        printf(" e positivo");
    return (EXIT_SUCCESS);
}


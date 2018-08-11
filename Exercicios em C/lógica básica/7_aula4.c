/*7 - Calcule o IMC. De acordo com (b), o IMC=peso em kilos dividido pela altura (em metros) ao quadrado.
 * Leia a altura (em metros) e o peso em kilos de uma pessoa, 
 * calcule o IMC e indique a situação de acordo com a tabela em (a). 
 * (Abaixo do peso, peso ideal, sobrepeso, obesidade I, II, III)
 */

/* 
 * File:   main.c
 * Author: 0783170
 *
 * Created on 31 de Agosto de 2017, 09:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float altura, peso, IMC;
    
    printf("Digite a sua altura em metros:");
    scanf("%f", &altura);
    printf("Digite seu peso:");
    scanf("%f", &peso);
    IMC= peso/(altura*altura);
    
    if (IMC>= 40) {
        printf("Obesidade Grau III.");
    } else {
        if (IMC >= 35) {
            printf("Obesidade Grau II.");
        } else {
            if (IMC >= 30) {
                printf("Obesidade Grau I.");
            } else {
                if (IMC>= 25) {
                    printf("Acima do peso");
                } else {
                    if (IMC >= 18.5) {
                        printf("Parabens, voce esta no seu peso ideal");
                    } else
                        printf("abaixo do peso.");
                }
            }
        }
    }
    return (EXIT_SUCCESS);
}


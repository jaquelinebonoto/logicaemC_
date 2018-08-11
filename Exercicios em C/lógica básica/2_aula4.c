/* Leia 04 (quatro) notas de um aluno, 
 * a primeira tem peso 1, 
 * a segunda peso 2, a terceira peso 3,
 * a quarta peso 4. 
 * Calcule a média e informe se o aluno foi aprovado ou não.
 * Usar 'else'.Caso a nota seja menor que 7 ele será reprovado.
 */

/* 
 * File:   main.c
 * Author: 0783170
 *
 * Created on 24 de Agosto de 2017, 11:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float n1,n2,n3,n4,media;
    printf("Digite nota 1:");
    scanf("%f",&n1);
    printf("\nDigite nota 2:");
    scanf("%f",&n2);
    printf("\nDigite nota 3:");
    scanf("%f",&n3);
    printf("\nDigite nota 4:");
    scanf("%f",&n4);
    media=(n1*1+n2*2+n3*3+n4*4)/10.0;    
    if (media>=7)
        printf("\nAprovado!");
    else 
        printf("Reprovado");
        return (EXIT_SUCCESS);
}


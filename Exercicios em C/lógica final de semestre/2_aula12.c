/* 2 - Escreva um programa que leia 3 números. 
O programa deve apresentar a soma e o produto dos 3 números. 
O programa deve ter uma função que recebe os três números e retorna a soma, e outra função que recebe os três números e retorna o produto.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma (int num1, int num2,int num3){
    return(n1+n2+n3);   
    }
    int produto (int n1,int n2, int n3){
        return(n1*n2*n3);
    }
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
    
    int num1,num2,num3;
    printf("Digite 3 números: ");
    scanf("%d\t%d\t%d",&num1,&num2,&num3);
    printf("Soma: %d\nProduto: %d",soma(num1,num2,num3),produto(num1,num2,num3));
    return (EXIT_SUCCESS);
}


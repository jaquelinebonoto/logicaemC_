/* 4 - Calculadora2: Escreva um programa onde o usu�rio poder� escolher uma das op��es:
a - Soma (ler operador 1 e operador 2)
b - Subtra��o (ler operador 1 e operador 2)
c - Divis�o (ler base e divisor)
d - Multiplica��o (ler base e multiplicador)
e - Fatorial
f - Potencia (ler base e potencia)
G - SAIR
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void soma (){
        int num1,num2;
        printf("Digite dois n�meros inteiros:\n");
        scanf("%d\t%d",&num1,&num2);
        printf("Soma: %d",num1+num2);
    }
    void sub (){
        int num1,num2;
        printf("Digite dois n�meros inteiros:\n");
        scanf("%d\t%d",&num1,&num2);
        printf("Subtra��o: %d",num1-num2);
    }
    void divis (){
        int num1,num2;
        printf("Digite dois n�meros inteiros:\n");
        scanf("%d\t%d",&num1,&num2);
        printf("Divis�o: %d",num1/num2);
    }
    void mult (){
        int num1,num2;
        printf("Digite dois n�meros inteiros:\n");
        scanf("%d\t%d",&num1,&num2);
        printf("Multiplica��o: %d",num1*num2);
    }
    void fator (){
        int num,x,fat=1;
        printf("Digite um n�mero inteiro:\n");
        scanf("%d",&num);
        for (x=1;x <= num;x++){
        fat=fat*x;    
        }
        printf("Fatorial: %d",fat);
    }
    void pot (){
        float num1,num2;
        printf("Digite dois n�meros inteiros:\n");
        scanf("%f\t%f",&num1,&num2);
        printf("Pot�ncia: %f",pow(num1,num2));
    }
    void sair (){
        printf("SAIR");
    }
      
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
    int escolha;
    printf("Digite 1 para soma, 2 para subtra��oo, 3 para divis�o, 4 para multiplica��o, 5 para fatorial, 6 para pot�ncia e 7 para sair\n");
    scanf("%d",&escolha);
    switch (escolha){
        case 1:
            soma();break;
        case 2:
            sub();break;
        case 3:
            divis();break;
        case 4:
            mult();break;
        case 5:
            fator();break;
        case 6:
            pot();break;
        case 7:
            sair();break;
            
    }
    return (EXIT_SUCCESS);
}


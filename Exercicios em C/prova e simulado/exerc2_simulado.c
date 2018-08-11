/* 2 - Escreva um programa que leia 3 valores a,b,c. (0,5pts)
- Escreva uma função que recebe como parâmetro os valores A,B,C e retorne o maior valor. (0,5 pts)
- Escreva uma função que recebe como parâmetro os valores A,B,C e retorne o menor valor. (0,5 pts)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior (int a, int b, int c){
    int maiorv;
    
    if (a>b && a>c)
        maiorv=a;
    if (b>a && b>c)
	    maiorv=b;
    if (c>a && c>b)
	    maiorv=c;
    
    return (maiorv);
}
/* ou
int maior (int a, int b, int c){
int resposta = a;
if (resposta<b) resposta=b;
if (resposta<c) resposta=c;
*/
int menor (int a, int b, int c){
    int menorv;
    
    if (a<b && a<c)
        menorv=a;
    if (b<a && b<c)
        menorv=b;
    if (c<a && c<b)
        menorv=c;
    
    return (menorv);
}
int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	int a, b, c;

	printf ("Informe um valor para a:\n");
	scanf("%d", &a);
	printf ("Informe um valor para b:\n");
	scanf("%d", &b);
	printf ("Informe um valor para c:\n");
	scanf("%d", &c);
	
	printf("O maior valor digitado é: %d\n", maior(a,b,c));
	printf("O menor valor digitado é: %d", menor(a,b,c));
	
	return (EXIT_SUCCESS);
}


/* 1 - Escreva um programa que leia uma Matriz de inteiros 2x5. (duas linhas e cinco colunas) 
a - Crie uma Fun��o que recebe como parametro o numero da linha e calcula a soma da linha; Indique a soma da linha 1 e da linha 2;
b - Usando a Fun��o definida em "a" fa�a uma fun��o que calcule a soma dos elementos da matriz;

c - Escreva uma fun��o que mostre os 10 numeros,5 numeros por linha, de acordo com a ordem da matriz;

d - Escreva uma fun��o que retorne o maior n�mero da matriz.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int m[2][5];

int funcsoma (int linha){
	int coluna, soma=0;

    for (coluna=0; coluna<5; coluna++){
		soma=soma+m[linha][coluna];
	}
	return (soma);
}

int somat (){
    int i,j, soma=0;
    for (i=0; i<2; i++){
        for (j=0; j<5; j++){
            soma=soma+m[i][j];
        }
    }
    return (soma);
}

void impre (){
    int i, j;
    
    for (i=0; i<2; i++){
        for (j=0; j<5; j++){
            	printf ("%3d\t", m[i][j]);
            }
        printf ("\n");
    }    
}


int maior (int m[2][3]){
    int maior, i, j;
    maior=m[0][0];
    for (i=0; i<2; i++){
        for (j=0; j<5; j++){
            if (maior<m[i][j]){
                maior=m[i][j];
            }
        }
    }
    return(maior);
}

int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	int i, j, num, val;

	for (i=0; i<2; i++){
		for (j=0; j<5; j++){
			printf ("Informe um valor para a posi��o [%d,%d]: ", i+1, j+1);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf ("\nInforme a linha que voc� deseja somar:\n");
	scanf ("%d", &num);
	printf ("A soma dos n�meros desta linha � %d\n", funcsoma(num));
	printf ("\nA soma da matriz � %d\n", somat(val));
	impre ();
	printf("\nO maior n�mero da matriz �: %d", maior(m));
	
	
	return (EXIT_SUCCESS);
}


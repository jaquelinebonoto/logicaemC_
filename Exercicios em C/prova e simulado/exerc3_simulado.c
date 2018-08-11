/* Fazer um algoritmo que leia um vetor A de 30 posições e cria dois vetores B e C. 
O vetor B contém o fatorial dos elementos de A e o vetor C contém o resultado da multiplicação dos valores de A pelo maior elemento do vetor. 
Escrever os vetores B e C no final e a quantidade de numeros primos nos 3 vetores. 
O calculo do fatorial deve ser feito por uma função que recebe como parametro o número e retorna seu fatorial. 
Escrever uma função que recebe um numero como parametro e retorna a quantidade de divisores. */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int fatorial (int n){
	int i, fat=1;
	for (i=2; i<=n; i++){
		fat=fat*i;
	}
	return fat;
}

int maior (int vetor[30]){
	int resp=vetor [0],i;
	for(i=0; i<30;i++){
		if (resp<vetor[i]) resp=vetor[i];
	}
	return resp;
}

int divisores (int n){
	int resp=0, i;
	for (i=1; i<=n; i++){
		if(n%i==0) resp++;
	}
	return resp;
}


int main(int argc, char** argv) {
	setlocale (LC_ALL, "Portuguese");
	
	int A[30], B[30], C [30], primosA=0, primosB=0, primosC=0;
	int i, m;
	
	for (i=0; i<30; i++){
		printf("Digite um valor para a posição %d: ", i);
		scanf ("%d", &A[i]);
	}
	m=maior(A);
	for (i=0; i<30; i++){
		B[i]= fatorial (A[i]);
		C[i]=m*B[i];
	}
	
	for(i=0; i<30; i++){
		if (divisores(A[i])==2) primosA++;		
		if (divisores(B[i])==2) primosB++;
		if (divisores(C[i])==2) primosC++;
	}

	printf ("Vetor B: \n");
	for (i=0; i<30; i++) printf("%d\t\n", B[i]);
	printf ("Vetor C: \n");
	for (i=0; i<30; i++) printf("%d\t\n", C[i]);	
	
	printf ("Quantidade de primos no vetor A: %d\n", primosA);
	printf ("Quantidade de primos no vetor B: %d\n", primosB);
	printf ("Quantidade de primos no vetor C: %d\n", primosC);
	
	return (EXIT_SUCCESS);
}
	
	

/*1 - Fa�a um programa que leia a nota de 10 alunos e armazene as notas em um vetor. Calcule:
a - a m�dia da classe (crie uma funcao que devolva a m�dia)
b - a quantidade de alunos aprovados, considere a m�dia=7 (fa�a uma fun��o que escreve o numero de aprovados)
c - a quantidade de alunos reprovados. (fa�a uma fun��o que escreve o n�mero de reprovados)*/

#include <stdio.h>
#include <locale.h>


float media (float nota[10]){
	int i;
	float media, soma=0;
	for (i=0; i<=10; i++){
	soma = soma + nota[i];
	}
	media = soma/10;
	return (media);
}

void rep (float nota[10]){
	int i, reprov=0;
	for (i=1; i<=10; i++){
		if (nota[i]<7){
			reprov++;
		}
	}
	printf ("O n�mero de reprovados �: %d\n", reprov);
}

void apr (float nota[10]){
	int i, aprov=0;
	for (i=1; i<=10; i++){
		if (nota[i]>=7){
			aprov++;
		}
	}
	printf ("O n�mero de aprovados �: %d\n", aprov);
}



int main () {
	setlocale (LC_ALL, "Portuguese");
	
	float vet[10];
	int i;
	
	for (i=1; i<=10; i++){
		printf ("Digite a nota do aluno %d:", i);
		scanf ("%f", &vet[i]);
	}  
	
	printf ("A m�dia da turma �: %.2f\n", media(vet));
	apr(vet);
	rep(vet);

}
	

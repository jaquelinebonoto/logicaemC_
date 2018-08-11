/*1 - Faça um programa que leia a nota de 10 alunos e armazene as notas em um vetor. Calcule:
a - a média da classe (crie uma funcao que devolva a média)
b - a quantidade de alunos aprovados, considere a média=7 (faça uma função que escreve o numero de aprovados)
c - a quantidade de alunos reprovados. (faça uma função que escreve o número de reprovados)*/

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
	printf ("O número de reprovados é: %d\n", reprov);
}

void apr (float nota[10]){
	int i, aprov=0;
	for (i=1; i<=10; i++){
		if (nota[i]>=7){
			aprov++;
		}
	}
	printf ("O número de aprovados é: %d\n", aprov);
}



int main () {
	setlocale (LC_ALL, "Portuguese");
	
	float vet[10];
	int i;
	
	for (i=1; i<=10; i++){
		printf ("Digite a nota do aluno %d:", i);
		scanf ("%f", &vet[i]);
	}  
	
	printf ("A média da turma é: %.2f\n", media(vet));
	apr(vet);
	rep(vet);

}
	

/*5 - Faça um programa que recebe a nota de 10 alunos e armazene as notas em um vetor. Calcule:
a - a média da classe
b - a quantidade de alunos aprovados, com média =7
c - a quantidade de alunos reprovados. */

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int notas [10];
	int i, aprov=0, reprov=0, media=0;
	
	for (i=0; i<10; i++){
		printf ("Digite a nota do aluno %d:\n", i);
		scanf ("%d", &notas[i]);
		media = media + notas[i];
			if (notas[i]>=7) {
			aprov=aprov+1;
				} else {
				if(notas[i]<7){
					reprov = reprov+1;
				}
			}
	}
	printf ("A média da turma é:%d\n", (media/10));
	printf("%d alunos foram Reprovados.\n", reprov);
	printf("%d alunos foram Aprovados.\n", aprov);
}

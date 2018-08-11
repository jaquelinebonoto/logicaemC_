/* 4 - Faça um programa que carregue automaticamente 2 vetores. O primeiro com 10 elementos numéricos e o segundo com 10 caracteres. 
Imprima o conteúdo destes vetores intercalados. 
Ex:
1a2b3c4d5e...
Dica: char c[10]; for(i=0;i<10<i++) c[i]=65+i;*/


#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int vet [10];
	char car[10];
	int i;
	

	for (i=0; i<10; i++){
		printf("%d %c\n", i, 65+i);
	}	
	
}

#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int num, i, div=0, somadiv=0, maior=0;
	float media=0;
	
	do{
	printf ("\nInforme um valor inteiro e positivo: ");	
	scanf ("%d", &num);
		if (num >= 1){
			if (num %2==1){ //ímpares
				for (i=1; i<num; i++){
					if (num %i == 0){
					printf ("%d - ", i);
					div = div + 1;
					somadiv = somadiv + num;
					media = somadiv / div;
					}
				}
				printf("%d: ", num);
			}else{ //pares
					for (i=1; i<=10; i++){
						printf("%d x %d = %d\n",num,i,num*i);
							if(num > maior){
								maior = num;	
						}
					}
   				}
		}else 
			printf ("\nA média dos ímpares é: %.1f", media);
			printf ("\nO maior número par é: %d", maior);
		
	} while (num!=0);
	

}


#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");

	float pop, fix, bx, at, ini, ano, taxa, lucro, total1, totalX;
	int menu,tipo,i;
	           
	printf("\n\n\t|=================================================================|\n\n");
	printf("\tPrograma de Rendimentos\n\n");
	printf("\t1 - Configurar Rendimentos\n");
	printf("\t2 - Calcular Rendimentos\n");
	printf("\t3 - Sair\n\n");
	printf("\t|=================================================================|\n\n\tDigite a Opcao: ");
	scanf("%d",&menu);
			
	switch(menu){
	
		case 1: { // Gravar Taxas
		             
			printf("\n\tDigite o rendimento da poupanca: ");
			scanf("%f",&pop );
			
			printf("\n\tDigite o rendimento da Renda fixa: ");
			scanf("%f",&fix);
			
			printf("\n\tDigite o rendimento das acoes de baixo risco: ");
			scanf("%f",&bx);
			
			printf("\n\tDigite o rendimento das acoes de alto risco: ");
			scanf("%f",&at);
			
	        if(pop<0 || fix<0 || bx<0 || at<0){
	                  printf("\n\tInvestimentos sem rendimento, nao sao bons investimentos");
	    	}
			system("cls");
			printf("\n\tDADOS GRAVADOS COM SUCESSO\n\n\n\t|=================================================================|\n\n\t%f  \t %f \t %f \t %f \t\n\n ",pop,fix,bx,at);
			printf("\t|=================================================================|\n\n");
		}   
																 
		case 2: { // Validar e grava investimentos
	
			if(pop==0 || fix==0 || bx==0 || at==0){
				system("cls");
				printf("\n\n\n\n\tAlgum Valor nao foi Digitado\n\n\n\n\tDigite um Valor Valido!");
				main ();
			}
				             
			printf("\n\tDigite o Valor inicial de investimento(real): ");
			scanf("%f",&ini );
			
			printf("\n\tDigite o Valor anual de investimento(real): ");
			scanf("%f",&ano);
			
			printf("\n\tDigite o tipo de investimento: ");
			printf("\n\t1 - Rendimento da poupanca: ");
			printf("\n\t2 - Rendimento da Renda fixa: ");
			printf("\n\t3 - Rendimento das acoes de baixo risco: ");
			printf("\n\t4 - Rendimento das acoes de alto risco: ");
			scanf("%d",&tipo);
				
			if(tipo==1){
				taxa=pop;            
			}
			if(tipo==2){
				taxa=fix;            
			}
			if(tipo==3){
				taxa=bx;            
			}
			if(tipo==4){
			taxa=at;            
			}
			total1= ini + ano;
			lucro=total1*(taxa/100);
			printf("\n\t 1  -  R$  %f -  R$ %f",total1,lucro);
				
			//totalX= total1 + lucro + ano;
				
			for(i=1;i<21;i++) {
				totalX=  + lucro + ano;
				
				printf("\n\t %d  -  R$  %f -  R$ %f",i,totalX,lucro);
			}
			printf("\n\n\n O valor total sai mais caro!");      
		}
	
		default: { // Valores invalidos
			printf ("\n Digito não válido");
		break;
		}
	}
}






















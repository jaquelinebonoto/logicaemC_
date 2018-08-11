/* Autor: Jaqueline
cálculo de rendimento 

*/

#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int codepref, codever, i, x=0, y=0, z=0, bra_pref=0, a=0, b=0, c=0, d=0, bra_ver=0, nul_pref=0, nul_ver=0;
	float tv_pref, tv_ver;
	
	for (i=1; i<=7; i++){
		printf ("Vote no seu candidato a Prefeito: \nCandidato X - 99; \nCandidato Y - 88; \nCandidato Z - 77; \nBranco - 111.\t");
		scanf ("%d", &codepref);
		
		printf ("\nVote no seu candidato a Vereador: \nCandidato A - 66666; \nCandidato B - 77777; \nCandidato C - 88888; \nCandidato D - 99999 \nBranc - 111.\t");
		scanf ("%d", &codever);
			
		switch (codepref){
			case 99:
				x = x + 1;
			break;
			case 88:
				y = y + 1;
			break;
			case 77:
				z = z + 1;
			break;
			case 111:
				bra_pref = bra_pref + 1;
			break;	
			default:
				nul_pref = nul_pref +1;
			break;	
		}
		switch (codever){
			case 66666:
				a = a + 1;
			break;
			case 77777:
				b = b + 1;
			break;
			case 88888:
				c = c + 1;
			break;
			case 99999:
				d = d + 1;
			break;
			case 111:
				bra_ver = bra_ver + 1;
			break;
			default:
				nul_ver = nul_ver +1;
			break;				
		}
	}
	
	tv_pref = x + y + z + bra_pref;
	tv_ver = a + b + c + d + bra_ver; 
	printf ("\n--------------------------------\n");
	printf ("Resultado para PREFEITOS: \n");
	printf ("Candidato X: %d votos. %.2f %%\n", x,(x/tv_pref)*100);
	printf ("Candidato Y: %d votos. %.2f %%\n", y,(y/tv_pref)*100);
	printf ("Candidato Z: %d votos. %.2f %%\n", z,(z/tv_pref)*100);
	printf ("Total de votos Nulos: %d", nul_pref);
	printf ("Total de votos Brancos: %d", bra_pref);
	printf ("\n--------------------------------\n");
	printf ("Resultado para VEREADORES: \n");
	printf ("Candidato A: %d votos. %.2f %%\n", a,(a/tv_ver)*100);
	printf ("Candidato B: %d votos. %.2f %%\n", b,(b/tv_ver)*100);
	printf ("Candidato C: %d votos. %.2f %%\n", c,(c/tv_ver)*100);
	printf ("Candidato D: %d votos. %.2f %%\n", d,(d/tv_ver)*100);
	printf ("Total de votos Nulos: %d", nul_ver);
	printf ("Total de votos Brancos: %d", bra_ver);
	
	
	
	
	
	
}

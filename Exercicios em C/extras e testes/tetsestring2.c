#include<stdio.h>
#include<string.h>
int main (void) {
	char str[80];
	strcpy(str,"alo");puts(str);
	printf("tamanho da string = %d\n", sizeof(str));
	printf("tamanho da string = %d\n", strlen(str));
	
}

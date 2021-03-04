#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char const* argv[]){
	
	char nome[10];
	int i;
	nome[0] = 'U';
	nome[1] = 'T';
	nome[2] = 'F';
	nome[3] = 'P';
	nome[4] = 'R';
	nome[5] = '\0';
	
	printf("%s\n", nome);
	
	for(i=0; nome[i] != '\0'; ++i){
		if (nome[i] == 'U') nome[i] = 'A';
	}
	
	printf("%s\n", nome);
	
	char uni[100];
	
	strcpy(uni, nome);
	
	printf("%s\n", uni);
	
	char c[100]
	
	for(i=0; i < uni[i] != '\0'; ++i){
		c[i] = uni[i]
	}
	c[i]='\0';
	
	printf("%s\n", c);
	
	printf("%i\n", strcmp("B", "A"));
	
	
	
	return 0;
}
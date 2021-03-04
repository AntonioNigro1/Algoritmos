#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, char const* argv[]){
	
	int i;
	char min[1000];
	
	printf("Digite o texto a ser convertido em letras maiusculas\n");
	fgets(min, 1000, stdin);
	
	
	for(i=0; min[i] != '\0'; ++i){
		
		min[i]=toupper(min[i]);

	}
	
	fputs(min, stdout);
	
	return 0;
}
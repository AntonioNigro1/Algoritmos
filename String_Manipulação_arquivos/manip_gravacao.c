#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 256


typedef char string[TAM];

int main(int argc, char const *argv[]) {

	FILE *arq = fopen("arquivo.txt", "w");
	string buffer;
	
	do {
		fgets(buffer, TAM, stdin);
		fputs(buffer, arq);
	} while (strcmp("pare\n", buffer));	
	
	fclose(arq);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(int argc, char const *argv[]) {
	
	FILE *arq = fopen("arquivo.txt", "r");
	char BUFFER[TAM];

	/*
	while ( (fgets(BUFFER, TAM, arq)) != NULL )
		printf("%s", BUFFER);
	*/

	do {
		fgets(BUFFER, TAM, arq);
		printf("%s", BUFFER);
	} while (!feof(arq));

	puts("Pressione uma tecla para continuar...");
	getchar();
	

	fclose(arq);
	return 0;
}
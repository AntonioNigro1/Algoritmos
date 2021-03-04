#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	FILE *arq = fopen("arquivo.txt", "r");

	char c;
	/*
	do {
		c = getc(arq);
		printf("%c", c);

	} while (c != EOF);
	*/

	
	while ( (c = fgetc(arq)) != EOF) {
		if (c != 'a') printf("%c", c);
	}
	
	




	fclose(arq);
	return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void Gera_num(FILE *fp){
	char c;
	int i;
	srand(time(NULL));
	for(i=0;i<1000;i++){
		c=1+ (rand() % 2500);
		putc(c, fp);
	}
}

void Copia_par(FILE *fp, FILE *arq){
	int i;
	rewind(fp);
	char c;
	
	do{
		c= getc(fp);
		if(c % 2 == 0)
			putc(c, arq);
	}while(c!= EOF);
	
	
}

int main(int argc, char const *argv[]){
	FILE *fp = fopen("numeros.bin","wb");
	FILE *arq = fopen("pares.bin","wb");
	Gera_num(fp);
	Copia_par(fp, arq);
	fclose(fp);
	fclose(arq);
}
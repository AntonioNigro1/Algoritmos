#include <stdlib.h>
#include <stdio.h>

int conta_linhas(void){
	int linhas=1, caractere;
	FILE *arq = fopen("arq.txt", "r+");
	do{
		caractere= fgetc(arq);
		if(caractere == '\n'){
		linhas++;
		}
	}while(caractere !=EOF);
		
	fclose(arq);
		
	return (linhas);
}


int conta_paragrafo(void){
	int paragrafo=1, caractere;
	FILE *arq = fopen("arq.txt", "r+");
	do{
		caractere= fgetc(arq);
			if(caractere == '\n'){
			paragrafo++;
			}
	}while(caractere !=EOF);
	paragrafo = (paragrafo +1)/2;
	
	fclose(arq);
	
	return (paragrafo);
}

int maior_linha(void){
	int quantidade=0, caractere, n_linhas, i=0,x, j;
	FILE *arq = fopen("arq.txt", "r+");
	n_linhas = conta_linhas();
	int Vtemp[n_linhas];
	
	do{
		caractere= fgetc(arq);
		if(caractere != '\n'){
			quantidade++;
		}
		if(caractere ==  '\n'){
			Vtemp[i]=quantidade;
			i++;
			quantidade=0;
		}
	}while(caractere !=EOF);
	
	x = Vtemp[0];
	
	for(i=0;i<n_linhas;i++){
			if(x<Vtemp[i]){
				x=Vtemp[i];
				j=i;
			}
		}
		
	fclose(arq);
	
	return (j);	
}

int quanti_vogais(void){
	int caractere, n_vogais=0;
	FILE *arq = fopen("arq.txt", "r+");
		do{
		caractere = fgetc(arq);
		if(caractere == 'a' ){
		n_vogais++;
		}
		if(caractere == 'e' ){
		n_vogais++;
		}
		if(caractere == 'i' ){
		n_vogais++;
		}
		if(caractere == 'o' ){
		n_vogais++;
		}
		if(caractere == 'u' ){
		n_vogais++;
		}
		if(caractere == 'A' ){
		n_vogais++;
		}
		if(caractere == 'E' ){
		n_vogais++;
		}
		if(caractere == 'I' ){
		n_vogais++;
		}
		if(caractere == 'O' ){
		n_vogais++;
		}
		if(caractere == 'U' ){
		n_vogais++;
		}
	}while(caractere !=EOF);
		
	fclose(arq);
		
	return (n_vogais);
}

void vogais_maiusculas(void){
	int caractere;
	FILE *arq = fopen("arq.txt", "r+");
	
	do{
		caractere= fgetc(arq);
		if(caractere == 'a' ){
			fseek(arq, -1, SEEK_CUR);
			fputc('A', arq);
		}
		if(caractere == 'e' ){
			fseek(arq, -1, SEEK_CUR);
			fputc('E', arq);
		}
		if(caractere == 'i' ){
			fseek(arq, -1, SEEK_CUR);
			fputc('I', arq);
		}
		if(caractere == 'o' ){
			fseek(arq, -1, SEEK_CUR);
			fputc('O', arq);
		}
		if(caractere == 'u' ){
			fseek(arq, -1, SEEK_CUR);
			fputc('U', arq);
		}
	}while(caractere !=EOF);
	
	fclose(arq);
}

int main(int argc, char const *argv[]){
	
	int n_linhas, n_paragrafos, n_vogais, caractere, mlinha;
	
	n_linhas = conta_linhas();
	
	n_paragrafos = conta_paragrafo();
	
	int Vtemp[n_linhas];
	
	mlinha = maior_linha();
	
	n_vogais= quanti_vogais();
	
	vogais_maiusculas();
	
	printf("O arquivo possui:%i linhas, %i paragrafos, %i vogais e sua maior linha eh: %i", n_linhas, n_paragrafos, n_vogais, mlinha);
	
	return 0;
}
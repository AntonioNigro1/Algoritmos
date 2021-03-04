#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int conta_linhas (void) {
	FILE *arq = fopen("arq.txt", "r");
	if (arq == NULL) {
		fprintf	(stderr, "Erro ao abrir o arquivo!");
		return 1;
	}
	int cont_l = 0;
	char letra;
	do{
		letra = fgetc(arq);
		if (letra == '\n') {
			cont_l++;
		}
	} while (letra != EOF);
	fclose(arq);
	return cont_l+1;
}

int conta_paragrafos (void) {
	FILE *arq = fopen("arq.txt", "r");
	if (arq == NULL) {
		fprintf	(stderr, "Erro ao abrir o arquivo!");
		return 1;
	}
	int cont_p = 0, resp;
	char letra;
	do{
		letra = fgetc(arq);
		if (letra == '\n') {
			cont_p++;
			if (cont_p == 2) {
				++resp;
			}
		}
	} while (letra != EOF);
	fclose(arq);
	resp = (resp+1)/2;
	return resp;
}

int maior_linha (void) {
	FILE *arq = fopen("arq.txt", "r");
	if (arq == NULL) {
		fprintf	(stderr, "Erro ao abrir o arquivo!");
		return 1;
	}
	int resp = conta_linhas();
	int cont_l[resp];
	int i = 0, j = 0, k = 0;
	char letra;
	do{
		letra = fgetc(arq);
		cont_l[i] += 1;
		if (letra == '\n') {
			i++;
		}
	} while (letra != EOF);
	for (int i = 1; i < resp; ++i) {
		if (cont_l[j] > cont_l[i]) {
			k = j;
		} else {
			k = i;
			j = i;
			i = i++;
		}
	}
	fclose(arq);
	return k;
}

int qtd_vogais (void) {
	FILE *arq = fopen("arq.txt", "r");
	if (arq == NULL) {
		fprintf	(stderr, "Erro ao abrir o arquivo!");
		return 1;
	}
	char letra;
	int cont_v = 0;
	do {
		letra = fgetc(arq);
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			cont_v++;
		}
		if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
			cont_v++;
		}
	} while (letra != EOF);
	fclose(arq);
	return cont_v;
}

void minusculas_maiusculas (void) {
	FILE *arq = fopen("arq.txt", "r+");
	int n;
	char letra, vogal;
	int cont_v = 0, i;
	do {
		letra = fgetc(arq);
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			fseek(arq, -1, SEEK_CUR);
			fputc(toupper(letra), arq);
		}
	} while (letra != EOF);
	fclose(arq);
}

int main(int argc, char const *argv[]) {
	
	int a,b,c,d;
	a = conta_linhas();
	printf("Número de linhas: %i\n", a);
	b = conta_paragrafos();
	printf("Número de paragrafos: %i\n", b);
	c = maior_linha();
	printf("Maior linha: %i\n", c-1);
	d = qtd_vogais();
	printf("Número de vogais: %i\n", d);
	minusculas_maiusculas();

	return 0;
}
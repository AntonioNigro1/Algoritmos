#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	
	int mes;
	
	printf("Digite o numero do mes a ser consultado:");
	scanf(" %i", &mes); 
	
	switch (mes) {
		case 1:
		printf("Janeiro - Alta Temporada\n");
		break;

		case 2:
		printf("Fevereiro - Alta Temporada\n");
		break;

		case 3:
		printf("Marco - Baixa Temporada\n");
		break;

		case 4:
		printf("Abril - Baixa Temporada\n");
		break;

		case 5:
		printf("Maio - Baixa Temporada\n");
		break;

		case 6:
		printf("Junho - Alta Temporada\n");
		break;

		case 7:
		printf("Junho - Alta Temporada\n");
		break;

		case 8:
		printf("Agosto - Baixa Temporada\n");
		break;

		case 9:
		printf("Setembro - Baixa Temporada\n");
		break;

		case 10:
		printf("Outubro - Baixa Temporada\n");
		break;

		case 11:
		printf("Novembro - Baixa Temporada\n");
		break;
	
		case 12:
		printf("Dezembro - Alta Temporada\n");
		break;

		default:
		printf("Mes invalido");
		break;
	}
	return 0;
}

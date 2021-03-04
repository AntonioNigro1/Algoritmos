#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	
	int mes;
	
	printf("Digite o numero do mes a ser consultado:");
	scanf("%i", &mes);
	system("clear || cls");
	switch (mes) {
		case 1:
		printf("O mes de Janeiro tem 31 dias\n");
		break;
		case 2:
		printf("O mes de Fevereiro tem 28 dias\n");
		break;
		case 3:
		printf("O mes de Marco tem 31 dias\n");
		break;
		case 4:
		printf("O mes de Abril tem 30 dias\n");
		break;
		case 5:
		printf("O mes de Maio tem 31 dias\n");
		break;
		case 6:
		printf("O mes de Junho tem 30 dias\n");
		break;
		case 7:
		printf("O mes de Julho tem 31 dias\n");
		break;
		case 8:
		printf("O mes de Agosto tem 31 dias\n");
		break;
		case 9:
		printf("O mes de Setembro tem 30 dias\n");
		break;
		case 10:
		printf("O mes de Outubro tem 31 dias\n");
		break;
		case 11:
		printf("O mes de Novembro tem 30 dias\n");
		break;
		case 12:
		printf("O mes de Dezembro tem 31 dias\n");
		break;
		default:
		printf("Mes invalido");
		break;
	}

	return 0;
}

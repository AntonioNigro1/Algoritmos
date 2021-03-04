#include <stdlib.h>
#include <stdio.h>

	int main (int argc, char const *argv[]){
		int dia;
			printf("Informe o dia em numero \n");
			scanf("%i", &dia);
			
		switch(dia){
			case 1 ... 5:
			printf("E um dia util");
			break;
			
			case 6 ... 7:
			printf("E um final de semana");
			break;
			
			default:
			printf("Dia invalido");
			break;
		}
	return 0;
	}
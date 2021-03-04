#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(int argc,char*argv[]){
	int dia;
	
	printf("\n");
	printf("\n digite o dia em numero: ");
	scanf("%i",&dia);
	
	switch(dia){
		case 1 ... 5:
			printf(" o dia informado e dia da semana");
		break;
		case 6 ... 7:
			printf(" o dia informado e fim de semana");
		break;
		default:
		printf(" o dia informado e invalido ");
		break; }
	
	printf("\n");
	
	return 0;
}
		

#include <stdio.h>
#include <stdlib.h>

struct{
	int ano;
	int mes;
	int dia;
} data;

int  novadata(int i){
	
	int mes[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
	int x;
	
	data.dia += i;
	
	x = data.mes;
	
	while(data.dia>mes[x]){
		
		if(data.dia>mes[x]){
			data.dia = data.dia - mes[x];
			data.mes = data.mes +1;
		}
		
		if(data.mes>12){
			data.mes = data.mes -12;
			data.ano = data.ano +1;
		}
	}
	
	printf("O final do evento sera dia: %i, mes: %i, ano: %i", data.dia, data.mes, data.ano);
}

int main (int argc, char const *argv[]){
	
	int i;
	
	printf("Digite o dia do inicia do evento ");
	scanf("%i", &data.dia);
	
	printf("Digite o mes do inicio do evento ");
	scanf("%i", &data.mes);
	
	printf("Digite o ano do inicio do evento ");
	scanf("%i", &data.ano);
	
	printf("Digite a duracao de dias do evento ");	
	scanf("%i", &i);
		
	novadata(i);
	
	return 0;
}
#include <stdlib.h>
#include <stdio.h>


struct{
	int dia;
	int mes;
	int ano;
} data1;

struct{
	int dia;
	int mes;
	int ano;
} data2;

struct{
	int dia;
	int mes;
	int ano;
} difdata;

int difdias(){

	int x=0;
	
	difdata.dia = data2.dia - data1.dia;
	difdata.mes = data2.mes - data1.mes;
	difdata.ano = data2.ano - data1.ano;
	
	if(difdata.mes>0)
		x=x + difdata.mes * 31;
	if(difdata.dia<0)
		x=x+ (- difdata.dia);
	if(difdata.dia>0)
		x=x + difdata.dia;
	if(difdata.ano>0)
		x=x + (difdata.ano * 365);
	
	printf("A diferenca e de %i dias", x);
	
}

int main (int agrc, char const *argv[]){

	printf("Insira o dia da data inicial ");
	scanf("%i", &data1.dia);
	
	printf("Insira o mes da data inicial ");
	scanf("%i", &data1.mes);

	printf("Insira o ano da data inicial ");
	scanf("%i", &data1.ano);
	
	printf("Insira o dia da segunda data ");
	scanf("%i", &data2.dia);
	
	printf("Insira o mes da segunda data ");
	scanf("%i", &data2.mes);
	
	printf("Insira o ano da segunda data ");
	scanf("%i", &data2.ano);

	difdias();
	
	return 0;
}
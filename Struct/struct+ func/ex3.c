#include <stdlib.h>
#include <stdio.h>



struct{
	int horas;
	int minutos;
} hm;

int min2hora(int x){
	
	int i;
	
	for(i=0;x>59;i++){
		
		if(x>=60){
		x= x - 60;
		hm.horas = hm.horas + 1;
		}
		
	}
	
	if(x<=59)
		hm.minutos = x;
	
	
	printf("Apos a conversao temos: %i horas e %i minutos", hm.horas, hm.minutos);
	
}

int main (int argc, char const *argv[]){
	
	int x;
	
	printf("Digite a quantidade de minutos a ser convertido em h/m ");
	scanf("%i", &x);
	
	hm.horas = 0;
	hm.minutos = 0;
	
	min2hora(x);
	
	return 0;
}
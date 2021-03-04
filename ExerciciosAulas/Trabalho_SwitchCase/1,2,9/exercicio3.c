#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(int argc,char*argv[]){
	int valor,notas100,notas50,notas10,notas5,notas1,resto100,resto50,resto10,resto5,resto1;
	
	printf("digite um valor: ");
	scanf("%i",&valor);
	
	notas100=valor/100;
	resto100=valor%100;	
	
	printf("%i\n", notas100);
	printf("%i\n", resto100);
	
	
	switch(resto100){
		case 0:
			notas50=0;
			notas10=0;
			notas5=0;
			notas1=0;
			resto50=0;
			resto10=0;
			resto5=0;
			resto1=0;
		break;
		default:
		notas50=resto100/50;
		resto50=resto100%50;
		break;}
	
	switch(resto50){
		case 0:
			notas10=0;
			notas5=0;
			notas1=0;
			resto10=0;
			resto5=0;
			resto1=0;
		break;
		default:
		notas10=resto50/10;
		resto10=resto50%10;
		break;}
		
	switch(resto10){
		case 0:
			notas5=0;
			notas1=0;
			resto5=0;
			resto1=0;
		break;
		default:
		notas5=resto10/5;
		resto5=resto10%5;
		break;}
	
	switch(resto5){
		case 0:
			notas1=0;
		break;
		default:
		notas1=resto10/1;
		break;}
		
	printf("    o numero minimo de notas necessarios para formar esse valor\n");
	printf(" %i notas de RS100\n",notas100);
	printf(" %i notas de RS50\n",notas50);
	printf(" %i notas de RS10\n",notas10);
	printf(" %i notas de RS5\n",notas5);
	printf(" %i notas de RS1",notas1);

	
	return 0;
	}
	
	

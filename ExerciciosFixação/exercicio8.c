#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(int argc,char*argv[]){
	int idade,adicional,preco,valor1;
	printf("digite a idade do conveniado: ");
	scanf("%i",&idade);
	
	valor1=100;
	
	switch(idade){
		case 0 ... 9:
			adicional=80;
		break;
		case 10 ... 30:
			adicional=50;
		break;
		case 40 ... 60:
			adicional=95;
		break;
		case 61 ... 170:
			adicional=130;
		break;
		default:
			printf(" valor nao encontrado");
			goto FIM;
		break; }
		
	preco=valor1+adicional;
		
	printf(" o valor a ser pago pelo conveniado e %i reais", preco);
	
	FIM:
	
	return 0;	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

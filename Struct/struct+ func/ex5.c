#include <stdlib.h>
#include <stdio.h>

struct {
	int p; 
	int q;
} racional;

int funreduz(){
	int x;
	
	printf("Digite um numero a ser reduzido ");
	scanf("%i", &racional.p);
	
	printf("Digite um numero para reduzir o anterior ");
	scanf("%i", &racional.q);
		
	x = racional.p / racional.q;
		
	printf("O resultado da operacao e :%i", x);
}

int negativa(){
	int x;
	
	printf("Digite um numero a ser negativado ");
	scanf("%i", &racional.p);
		
	x= racional.p * (-1);
		
	printf("O resultado da operacao e :%i", x);

}

int soma(){
	int x;
	
	printf("Digite um numero a ser somado ");
	scanf("%i", &racional.p);
	
	printf("Digite um numero a ser somado ");
	scanf("%i", &racional.q);
	
	x= racional.p + racional.q;

	printf("O resultado da operacao e :%i", x);
}

int mult(){
	int x;
	
	printf("Digite o primeiro numero da multiplicacao ");
	scanf("%i", &racional.p);

	printf("Digite o segundo numero da multiplicacao ");
	scanf("%i", &racional.q);
	
	x= racional.p * racional.q;

	printf("O resultado da operacao e :%i", x);
}

int quoci(){
	int x;
	
	printf("Digite o numero a ser divido para conseguir o quociente ");
	scanf("%i", &racional.p);

	printf("Digite o numero a dividir ");
	scanf("%i", racional.q);

	x= racional.p % racional.q;

	printf("O resultado da operacao e :%i", x);
	
}
int main (int argc, char const *argv[]){
	
	int n;
	
	printf("Digite: 1 para reduz, 2 para neg, 3 para soma, 4 para mult, 5 para div ");
	scanf("%i", &n);
	
	if(n==1)
	funreduz();
	
	if(n==2)
	negativa();
	

	if(n==3)
	soma();
	
	if(n==4)
	mult();
	
	if(n==5)
	quoci();
	
	return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void fx(float x){
	float resultado;
	resultado = 1/(pow(x,5)*((pow(2.718281,1.432)-1)/x));
	printf("O resultado eh: %f\n", resultado);
}

int main(int agrc, char const *argv[]){
	
	float resultado, x;
	
	printf("De um valor X para a funcao: ");
	scanf("%f", &x);
	
	fx(x);
	
	
	return 0;
}
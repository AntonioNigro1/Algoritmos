#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int funcao_x_n(float x,float n){
	float resultado;
	
	if(x>0){
		resultado= x+ (pow(x,n)/n)-(pow(x,n+2)/n+2);
		return (resultado);
	}
	if(x<0){
		resultado= -(pow(x,n-1)/n-1) + (pow(x,n+1)/n+1);
		return (resultado);
	}
}

int main (int argc, char const *argv[]){
	
	float resultado, n, x;
	
	printf("De um valor com virgula para x: ");
	scanf("%f", &x);
	
	printf("\nDe um valor com virgula para n: ");
	scanf("%f", &n);
	
	resultado=funcao_x_n(x, n);
	
	printf("O resultado eh: %f", resultado);
	
	return 0;
	
}
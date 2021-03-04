#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void recebe_valor(int n, int x, int Vetor[x]){
	int i, j;
	for(i=0;i<x;i++){
		printf("De um valor para o %i elemento do vetor:\n", i+1);
		scanf("%i", &j);
		Vetor[i]=j;
	}
}

int media(int n, int x, int Vetor[x]){
	int i, soma=0;
	float media;
	
	for(i=0;i<x;i++){
		soma= soma + Vetor[i];	
		printf("soma = %i\n", soma);
	}
	
	media= soma * 1/n;
	
	return (media);
}

int desvpad(int n, int x, int Vetor[x]){
	float mediaf = media(n, x, Vetor);
	float desvio, z=0;
	int i;
	
	for(i=0;i<x;i++){
		z= z + pow(Vetor[i]- mediaf, 2);
	}
	
	desvio = sqrt(z/(n-1));
	
	return (desvio);
}

int main (int argc, char const *argv[]){
	int x, n;
	float mediaf, desvio;
	
	printf("De um tamanho para o vetor:\n");
	scanf("%i", &x);
	printf("De um valor para n:\n");
	scanf("%i", &n);
	
	int Vetor[x];
	
	recebe_valor(n, x, Vetor);
	
	mediaf = media(n, x, Vetor);
	
	desvio = desvpad(n, x, Vetor);
	
	printf("A media e: %f\nO desvio padrao e:%f", mediaf, desvio);
	
	return 0;
}
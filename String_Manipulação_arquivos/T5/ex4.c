#include <stdlib.h>
#include <stdio.h>


void recebe_valor(int n, int Vetor[n]){
	int i, j;
	for(i=0;i<n;i++){
		printf("De um valor para o %i elemento do vetor:\n", i+1);
		scanf("%i", &j);
		Vetor[i]=j;
	}
}

int produto_vetor(int n, int Vetor[n]){
	int i, mult=1;
	for(i=0;i<n;i++){
		mult = mult * Vetor[i];
	}
	return (mult);
}

int main(int argc, char const *argv[]){
	int resultado, soma, n;
	
	printf("Digite um tamanho para o vetor: ");
	scanf("%i", &n);
	
	int Vetor[n];
	
	recebe_valor(n, Vetor);
	
	resultado= produto_vetor(n, Vetor);
	
	printf("O resultado do produto eh: %i", resultado);
	
	return 0;
}
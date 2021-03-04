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

int somatoria_vetor(int n, int Vetor[n]){
	int i, soma=0;
	for(i=0;i<n;i++){
		soma = soma + Vetor[i];
	}
	return (soma);
}

int main(int argc, char const *argv[]){
	int resultado, soma, n;
	
	printf("Digite um tamanho para o vetor: ");
	scanf("%i", &n);
	
	int Vetor[n];
	
	recebe_valor(n, Vetor);
	
	resultado= somatoria_vetor(n, Vetor);
	
	printf("O resultado da somatoria eh: %i", resultado);
	
	return 0;
}
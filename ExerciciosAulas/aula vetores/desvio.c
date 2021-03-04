#include <stdio.h>
#include <stdlib.h>
#include <math.h>




	int main (int argc, char const *argv[]){
		
		float media, resultado, soma;
		int x;
		int n = 30;
		soma=0.0;
		int i, vetor[n];
		
			for(i=0; i<n; i++){
				vetor[n] = i + 1;
			}
		
				for(soma = 0.0; soma<=n; x++){
				soma = soma + 1.0;
				}
		media = soma / n;
		
		resultado =sqrt( (soma * pow((30-media),2))/n);
		
		printf("O desvio padrao eh \n %f", resultado);
		
		return 0;
		
	
	}
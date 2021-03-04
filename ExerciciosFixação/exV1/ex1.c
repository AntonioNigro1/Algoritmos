#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
	
	int V[10], i, j, aux;
	
	printf("Insira valores para o vetor\n");
	
		for(i=0; i<=10; i++){
			printf("V[%i] ", i);
			scanf("%i", &V[i]);
		}
		
		for(i=1; i<=10; i++){
			aux = V[i];
			j = i - 1;
				
				while((j>=0) && (aux < V[j])){
					V[j+1] = V[j];
					j--;
				}
				V[j+1] = aux;
		}
		
		printf("O maior valor do vetor e %i, o segundo maior e %i", V[10], V[9]);
		
	return 0;
}
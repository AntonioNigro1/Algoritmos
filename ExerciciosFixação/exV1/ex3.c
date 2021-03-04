#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
	
	int V[10], i, A[10], x;
	
		for(i=0; i<10; i++){
			V[i]= 1 + rand () % 100;
			printf("A posicao %i, contem %i\n", i, V[i]);
		}

			for(i=0;i<9;i++){ /* Essa parte do programa nao esta funcionando pos A[i] nao esta recebendo o valor de X */
				x =(V[i]-V[i+1]);
				A[i]= x;

			}
			
			for(i=1; i<=10; i++){ /* Ordenando os valores(dif entre os ele) que deveriam estar no vetor A do menor para o maior */
			aux = A[i];
			j = i - 1;
				
				while((j>=0) && (aux < A[j])){
					A[j+1] = A[j];
					j--;
				}
				A[j+1] = aux;
		}
			
			printf("A menor diferença entre os elementos é %i", A[0]);
			
		return 0;
}
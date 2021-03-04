#include <stdlib.h>
#include <stdio.h>


int main (int argc, char const *argv[]){
	
	int A[20], j, i, com, busca;
	
		for(i=0; i<20; i++){
			A[i] = rand () %100;
		}
			for(i=1; i<=20; i++){
				com = A[i];
				j = i - 1;
				
					while((j>=0) && (com < A[j])){
						A[j+1] = A[j];
						j--;
					}
					A[j+1] = com;
			}
		
		printf("Digite o numero que deseja verificar ");
		scanf("%i", &busca);
		
			for(i=0; i<20; i++){
				if(busca == A[i])
					printf("O valor esta na posicao %i\n", i);
				
			}
				if(i=20)
					printf("O valor nao esta no vetor\n");
				
			for(i=0; i<20; i++){
				printf("A posicao %i, contem %i\n", i, A[i]);
			}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]){
	int i, c, x, fim, busca, in, med, final; 
	int A[20];
	fim = 20;
	
		for(i=0; i<20; i++){
				A[i] = 1 + rand () %100;
		}
			do{
				c = 0;
				for(i=0; i< fim-1; i++){
					
					if(A[i] > A[i+1]){
						x = A[i];
						A[i] = A[i+1];
						A[i+1] = x;
						c = i;
					}
				}
				fim--;
			}while(c !=0);
		
		for(i=0; i<20; i++){
			printf("A posicao %i, contem %i\n", i, A[i]);
		}
		
		/*
		Buscabinaria:
		printf("Digite o valor q deseja verificar");
		scanf("%i", &busca);
		
			in = 0;
			final = 19;
			
				while(in < final){
					med= (in + final)/2;
					
						if(busca<A[med])
							final = med-1;
							
							else if(busca> A[med])
								in = med+1;
									
									else if(busca= A[med])
										printf("O valor esta no meio do vetor");
				}
				
		*/
	return 0;
}
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]){
	int i, j, min, x;
	int A[20];
	
		for(i=0; i<20; i++){
				A[i] = rand () %100;
				printf("%i\n", A[i]);
		}
		
		for(i=0; i<19; i++){
			min = i;
			
			for(j=i+1; j<20; j++){
				if(A[j] < A[min])
					min = j;
			}
				if(i!= min){
					x = A[i];
					A[i] = A[min];
					A[min] = x;
				}
		}
		
		for(i=0; i<20; i++){
			printf("A posicao %i, contem %i\n", i, A[i]);
		}
	return 0;
}
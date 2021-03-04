#include <stdlib.h>
#include <stdio.h>
#define N 10

void ordena(int A[N]){
	int i, j, min, x;
	
	for(i=0; i<N; i++){
			min = i;
			
			for(j=i+1; j<N; j++){
				if(A[j] < A[min])
					min = j;
			}
				if(i!= min){
					x = A[i];
					A[i] = A[min];
					A[min] = x;
				}
	}
}

int main(int argc, char const* argv[]){
	int i;
	int A[N] = { 13, 7, 23, 8, 9, 4, 1, 19, 2, 6};
	ordena(A);
	
	for(i=0;i<N;i++){
		printf("%i,	", A[i]);
	}
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const* argv[]){
	
	int A[5]= { 5, 6, 3, 15, 10};
	int B[5], i, x;
	
	for(i=1; i<4; i++){	
		x= (A[i-1]+A[i]+A[i+1])/3;
		B[i]= x;		
	}
	
	B[0]= A[0];
	B[4]= A[4];
	
	for(i=0; i<5; i++){
		printf("O %i valor suavizado e, %i\n", i, B[i]);
	}
	
	return 0;
}
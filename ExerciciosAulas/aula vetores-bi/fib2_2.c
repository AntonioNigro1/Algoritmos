#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char const *argv[]){
 
	int matrixMult2x2(long A[2][2], long B[2][2], long R[2][2]){
		long temp[2][2];
		temp[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
		temp[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
		temp[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
		temp[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];

		R[0][0] = temp[0][0];
		R[0][1] = temp[0][1];
		R[1][0] = temp[1][0];
		R[1][1] = temp[1][1];
	}
 

	long fibonacciLin(int n){
		if(n < 2){
			return n;
		}

		long baseMatrix[2][2] = {{0,1},{1,1}};
     

		long p[2][2] = {{1, 0}, {0, 1}};
		int i;
		for(i = 0; i < n; i++){        
			matrixMult2x2(p, baseMatrix, p);
		}
		printf("%i %i",p[0][1]);
	}
}
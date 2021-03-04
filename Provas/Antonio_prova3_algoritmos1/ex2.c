#include <stdio.h>
#include <stdlib.h>
#define N 2

void multiplica(int A[N][N], int B[N][N], int C[N][N]){
	int i, j, k, soma;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			soma=0;
			for(k=0;k<2;k++){
				soma = soma + A[i][j] * B[j][k];
				C[i][j] = soma;
			}
		}
		
	}
	
	
	
}



int main(int argc, char const *argv[]){
	int A[N][N] = { (102,19), (15,3) };
	int B[N][N] = { (12,190), (13,33) };
	int C[N][N], i, j;
	
	multiplica(A, B, C);
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("A %i linha, %i coluna possui %i\n", i+1, j+1, C[i][j]);
		}
	}
	
	
	return 0;
}
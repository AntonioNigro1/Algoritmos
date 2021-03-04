#include <stdlib.h>
#include <stdio.h>

void valores_matriz(int A[2][3], int B[3][2]){
	int i, j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\n");
			printf("Matriz A, de o valor da linha %i, coluna %i: ", i+1, j+1);
			scanf("%i", &A[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("\n");
			printf("Matriz B, de o valor da linha %i, coluna %i: ", i+1, j+1);
			scanf("%i", &B[i][j]);
		}
	}
	
	
}


void mult_matriz(int A[2][3],int B[3][2],int C[2][2]){
	int i, j, k, x, soma;

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			soma=0;
			for(k=0;k<2;k++){
				soma= soma + A[i][j] * B[j][k];
				C[i][j]=soma;
			}
		}
	}	
}

void imprimir_matriz(int C[2][2]){
	int i, j;
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<2;j++){
			printf("%i\t", C[i][j]);
		}
	}
}

int main(int argc, char const *argv[]){
	int i, j, k, soma;
	int A[2][3], B[3][2], C[2][2];
	
	valores_matriz(A, B);
	
	mult_matriz(A, B, C);
	
	printf("A nova matriz eh:");
	imprimir_matriz(C);
	
	return 0;
}
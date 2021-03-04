#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const* argv[]){
	
	int l1, l2, c1, c2;
	
	printf("Insira a quantidade de linhas da primeira matriz ");
		scanf("%i", &l1);
	
	printf("Insira a quantidade de colunas da primeira matriz ");
		scanf("%i", &c1);
		
	printf("Insira a quantidade de linhas da segunda matriz ");
		scanf("%i", &l2);
		
	printf("Insira a quantidade de colunas da segunda matriz ");
		scanf("%i", &c2);
		
	int A[l1][c1];
	int B[l2][c2];
	int C[c1][l2];
	int i, j, k, soma;
	
	if((c1==l2)&&(l1==c2)){
	
		for(i=0;i<l1;i++){
			for(j=0;j<c1;j++){
				printf("Insira um valor inteiro para a linha %i, coluna %i da primeira matriz ", i, j);
					scanf("%i", &A[i][j]);
			}
		}
	
		for(i=0;i<l2;i++){
			for(j=0;j<c2;j++){
				printf("Insira um valor inteiro para a linha %i, coluna %i da segunda matriz ", i, j);
					scanf("%i", &B[i][j]);
			}
		}
	
		for(i=0;i<l1;i++){
			for(j=0; j<c2; j++){
				soma=0;
				for(k=0;k<c2;k++){
					soma= soma + A[i][j]*B[j][k];
					C[i][j]= soma;
				
				}
			}
		}
	
		for(i=0;i<c1;i++){
			for(j=0;j<l2; j++){
				printf("A linha %i, coluca %i contem o valor %i\n", i, j, C[i][j]);
			}
		}
	} else {
		printf("Nao e possivel realizar o produto entre as matrizes");
	}
	
	return 0;

}
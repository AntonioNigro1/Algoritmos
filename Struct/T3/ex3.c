#include <stdlib.h>
#include <stdio.h>



int main (int argc, char const *argv[]){
	
	int A1[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int A2[3][2] = { {1, 4}, {2, 5}, {3, 6} };
	int C[2][2];
	int i, j, k, som;
	som =0;
	
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
				som=0;
				for(k=0; k<3; k++){
					som = som + (A1[i][k] * A2[k][j]);
					C[i][j] = som;
				}	
			}
		}
			
			for(i=0; i<2; i++){
				for(j=0; j<2; j++){
					printf("A matriz produto, linha %i, coluna %i, possui valor %i\n", i, j, C[i][j]);
				}
			}
		
			return 0;
}
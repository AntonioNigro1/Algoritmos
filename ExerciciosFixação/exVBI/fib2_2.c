#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char const *argv[]){
	int i, j, k, n, nmax;
	long A1[2][2] = { {1,1},{1,0} };
	long A2[2][2] = { {0,0},{0,0} };
	
	n= 0;
	nmax= 20;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
				
				A2[i][j] = A2[i][j] + A1[i][k] * A1[k][j];	
			}
		}
	}
	
	while(n<nmax-2){
		long temp[2][2]= { {0,0}, {0,0} };
		n++;
	
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
				for(k=0; k<2; k++){
					temp[i][j] = temp[i][j] + A1[i][k] * A2[k][j];

				}
			}
		}	
			A2[0][0]=temp[0][0];
			A2[0][1]=temp[0][1];
			A2[1][0]=temp[1][0];
			A2[1][1]=temp[1][1];
			
	}	
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%i\t", A2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
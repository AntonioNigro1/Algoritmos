#include <stdio.h>
#include <stdlib.h>


int main (int argc, char const *argv[]){
	
	int A[3][3] = { {1, 4, 7}, {4, 2, 9}, {7, 9, 3} };
	int sn=0, i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
			if(A[i][j] != A[j][i])
				sn=1;
			
		}
	}
		if(sn != 0){
			printf("A matriz nao e simetrica");
		} else {
			printf("A matriz e simetrica");
		}
	return 0;
}
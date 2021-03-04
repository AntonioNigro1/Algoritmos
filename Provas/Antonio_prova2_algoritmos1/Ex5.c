#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[]){
	
	int A[3][3] = { {1, 4, 7}, {4, 2, 9}, {7, 9, 3} };
	int i, j, x=0;
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			if(A[i][j] != A[j][i])
				x=1;
		}
	}
	
	if(x==0)
		printf("A matriz e simetrica");
	else 
		printf("A matriz nao e simetrica");
	
	return 0;
}
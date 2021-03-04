#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[]){
	
	int A[10][10]={{1,0,0,0,0,0,0,0,0,0}}, i, j;
	
	A[0][0]=1;
	A[0][1]=0;
	A[1][1]=1;
	for(i=1;i<10;i++){
	 A[i][0]=1;
		for(j=1;j<10;j++){
			A[i][j]=A[i-1][j-1]+A[i-1][j];
		}
	}
	
	for(i=0;i<10;i++){
		printf("\n");
		for(j=0;j<10;j++){
				printf("%i\t", A[i][j]);
	
		}
	}
	
	return 0;
}
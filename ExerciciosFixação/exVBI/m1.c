#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
	
	int i, j;
	int M1[2][5];
	int V[5];
	int M2[2][5];
	
	
	
	for(i=0; i<2; i++){
		for(j=0; j<5; j++){
			M1[i][j]= 1 + rand () % 100;
		}	
	}
	for(i=0; i<5; i++){
		V[i]= 1 + rand () % 100;
	}
	for(i=0; i<2; i++){
		for(j=0; j<5; j++){
	M2[i][j]= V[i] * M1[i][j];
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<5; j++){
			printf("A linha %i, coluca %i, contem %i\n", i, j, M2[i][j]);
		}
	}
	return 0;
	
}
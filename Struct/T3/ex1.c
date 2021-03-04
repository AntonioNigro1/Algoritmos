#include <stdlib.h>
#include <stdio.h>

int main (int argc, char const *argv[]){
	
	int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int T[3][3];
	int i, j;
	
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				T[i][j]= A[j][i];
				printf("Matriz T linha %i, coluna %i possui valor %i\n", i, j, T[i][j]);
			}
		}

		
	return 0;
}
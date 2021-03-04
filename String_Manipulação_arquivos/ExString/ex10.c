#include <stdlib.h>
#include <stdio.h>


int main (int argc, char const* argv[]){

	int i, x=0;
	char A[100], B[100];
	
	printf("Entre com a primeira string que deseja chegar a distancia de Hamming\n");
		fgets(A, 100, stdin);
		
	printf("Entre com a segunda string\n");
		fgets(B, 100, stdin);

	for(i=0;A[i]!='\0'; i++){
		if(A[i]!=B[i])
			x++;
	}

		if(x==0)
			printf("A distancia de hamming e 0");
		else
			printf("A distancia de hamming e %i", x);
		
	return 0;
}
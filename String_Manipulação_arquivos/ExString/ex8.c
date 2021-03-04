#include <stdlib.h>
#include <stdio.h>


int main (int argc, char const* argv[]){
	
	char A[1000], B[1000];
	int x, i;
	x=0;
	
	printf("A primeira string e igual a segunda?\nDescubra\n");
	printf("Digite a primeira string\n");
	fgets(A, 1000, stdin);
	
	printf("Digite a segunda string\n");
	fgets(B, 1000, stdin);
	
	for(i=0;A[i]!='\0';i++){
		if(A[i]!=B[i])
			x=1;
	}
	
	if(x=1)
		printf("Falso");
	else
		printf("Verdadeiro");
	
	
	return 0;
	
}
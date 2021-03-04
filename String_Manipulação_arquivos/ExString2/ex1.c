#include <stdlib.h>
#include <stdio.h>

void inverte(char A[100]){
	char B[100];
	int i, j;
	
	for(i=0;A[i]!='\0';++i){
		
	}
	j=0;
	for(i;i>=0;--i){
		B[j]=A[i];
		++j;
	}
	
	fputs(B, stdout);
}

int main(int agrc, char const* argv[]){
	char A[100];
	
	
	fputs("Digite o texto a ser invertido\n", stdout);
	fgets( A, 100	, stdin);
	
	inverte(A[100]);
	
	
	
	return 0;
}
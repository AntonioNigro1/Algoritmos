#include <stdlib.h>
#include <stdio.h>

int compara_string(char A[500], char B[500]){
	int i, x;
	for(i=0;i<500;i++){
		if(A[i]!=B[i])
			return 0;
	}
	return 1;
}

int main(int argc, char const *argv[]){
	int x, i;
	char A[500];
	char B[500];
	
	printf("Digite o conteudo da primeira string:\n");
	fgets(A, 500, stdin);
	setbuf(stdin, NULL);
	
	printf("Digite o conteudo da segunda string:\n");
	fgets(B, 500, stdin);
	setbuf(stdin, NULL);
	
	x = compara_string(A, B);
	
	if(x==1)
		printf("As strings sao iguais");
	
	if(x==0)
		printf("As strings sao diferentes");
	
	return 0;
}
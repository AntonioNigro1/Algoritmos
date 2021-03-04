#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const* argv[]){
	
	char A[100], B[100];
	int i, x;
	
	printf("Digite o nome da pessoa\n");
	fgets(A, 1000, stdin);
	
	for(i=0; A[i]!=32;i++){
		B[i]=A[i];
	}
	B[i]=',';
	i++;
	x=i;
	
	for(i;A[i]!=32;i++){
		
	}
	
	for(i;A[i]!='\0';i++){
		B[x]=A[i];
		x++;
	}
	
	
	fputs(B, stdout);
	
	return 0;
	
}
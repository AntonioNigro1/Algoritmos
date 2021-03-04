#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[]){
	int i, x, z;
	char A[40], B[40], C[100];
	
	fputs("Digite o conteudo da primeira string\n", stdout);
	fgets(A,40,stdin);
	
	fputs("Digite o conteudo da segunda string\n", stdout);
	fgets(B,40,stdin);
	
	
	
	for(i=0; A[i]!='\0';i++){
		C[i]=A[i];
	}
	x=i-1;
	z=0;
	for(i=1;B[i-1]!='\0';i++){
		
		if(z==0){
			C[x]=',';
			z=1;
		}
		C[i+x]=B[i-1];
	}
	
	
	fputs(C, stdout);
	
	return 0;
}
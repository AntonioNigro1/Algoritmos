#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char const* argv[]){
	
	char buffer[1024];
	
	
	fputs("Digite um nome ", stdout);
	fgets(buffer, 1024, stdin);
	
	fputs(buffer, stdout);
	

	return 0;

}
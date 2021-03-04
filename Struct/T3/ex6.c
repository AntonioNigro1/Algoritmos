#include <stdlib.h>
#include <stdio.h>

int main( int argc, char const *argv[]){
	
	int M1[10][28], i, j, x;
	
	
	for(i=0; i<10; i++){
		for(j=0; j<28; j++){
			
			M1[i][j] = 1 + rand () % 100;
			printf("A avenida %i, cruzando com a %i possui %i acidentes\n", i, j, M1[i][j]);
		}
	}
	
	printf("Os cruzamentos mais perigosos sao \n");
		for(i=0; i<10; i++){
			for(j=0; j<28; j++){
				if(M1[i][j] >50)
					printf("Cruzamento da %i, com %i, possuindo %i acidentes\n", i, j, M1[i][j]);
			}
		}
	 
	return 0;
}
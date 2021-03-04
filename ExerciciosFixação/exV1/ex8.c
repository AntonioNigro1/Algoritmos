#include <stdio.h>
#include <stdlib.h>


int main (int argc, char const *argv[]){
	int V[4] = { 3, 5, 4, 3};
	int Suave[4], i;
	
	for(i=0; i<4; i++){
		
		Suave[i]= ((V[i]-1)+V[i]+(V[i]+1))/3;
	}
	
	for(i=0; i<4; i++){
		printf("O %i valor suavizado e, %i\n", i, Suave[i]);
	}
	return 0;
	
}
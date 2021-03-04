#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	int i, soma;
		i= 100;
		soma= 0;
			while(i<=1000){
		
				if(i%7==1){
				soma= soma + i;
				}
				
			i=i+1;
		}
		printf("%i", soma);
	
	return 0;
}
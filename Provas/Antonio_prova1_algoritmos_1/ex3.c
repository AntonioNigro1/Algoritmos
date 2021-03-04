#include<stdlib.h>
#include<stdio.h>

int main (int argc, char const *argv[]){
	int a, b, c;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	
	
	if( a > b && a > c){
	printf("O maior numero e %i\n", a);
	}
		
		else if( b > c ){
			printf("O maior numero e %i\n", b); 
		}
		else{
			printf("O maior numero e %i\n", c);
		}
	
	if( a < b && a < c){
	printf("O menor numero e %i\n", a);
	}	
		else if (b < c){
			printf("O menor numero e %i\n", b); 
		}
		else{
			printf("O menor numero e %i\n", c);
		}
		return 0;
		
		}
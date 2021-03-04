#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
	int l, c, i;
	
	for(l=0;l<1;l++){
		printf("  *****  \n");
	}
		for(c=0; c<1; c++){
			printf(" *     *\n");
		}
			for(i=0; i<5; i++){
				printf("*       *\n");
			}
				for(c=0; c<1; c++){
					printf(" *     *\n");
				}
					for(l=0; l<1; l++){
						printf("  *****");
					}
					
	return 0;
}
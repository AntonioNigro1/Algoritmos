#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
	int l, c, i;
	l=0;
	c=0;
	i=0;
	while(l<1){
		printf("  *****  \n");
		l++;
	}
		while(c<1){
			printf(" *     *\n");
			c++;
		}
			while(i<5){
				printf("*       *\n");
				i++;
			}
			c=0;
				while(c<1){
					printf(" *     *\n");
					c++;
				}
				l=0;
					while(l<1){
						printf("  *****");
						l++;
					}
					
	return 0;
}
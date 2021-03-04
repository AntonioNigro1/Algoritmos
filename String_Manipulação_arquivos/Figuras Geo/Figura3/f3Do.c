#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
	int l, c, i;
	l=0;
	c=0;
	i=0;
	do{
		printf("  *****  \n");
		l++;
	}while(l<1);
		do{
			printf(" *     *\n");
			c++;
		}while(c<1);
			do{
				printf("*       *\n");
				i++;
			}while(i<5);
			c=0;
				do{
					printf(" *     *\n");
					c++;
				}while(c<1);
				l=0;
					do{
						printf("  *****");
						l++;
					}while(l<1);
					
	return 0;
}
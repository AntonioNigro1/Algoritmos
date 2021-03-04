#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]){
	int l1, l2, l3, l4, l5;
	l1=0;
	l2=0;
	l3=0;
	l4=0;
	l5=0;
	
	do{
		printf("   *\n");
		l1++;
	}while(l1<1);
		do{
			printf("  ***\n");
			l2++;
		}while(l2<1);
			do{
				printf(" *****\n");
				l3++;
			}while(l3<1);
				do{
					printf("*******\n");
					l4++;
				}while(l4<1);
					do{
						printf("  ***\n");
						l5++;
					}while(l5<6);
	return 0;
}
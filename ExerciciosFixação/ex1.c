#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main(int argc, char const *argv[]){
		int a, b;
			printf("Insira o numero a ser dividido por 3 \n");
			scanf("%i", &a);
			
		b = a % 3;
			switch(b){
				case 0:
				printf("O numero e divisivel por 3");
				break;
				
				default:
				printf("O numero nao e divisivel por 3");
				break;
			}
		return 0;
	}

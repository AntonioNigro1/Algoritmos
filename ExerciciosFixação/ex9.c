#include<stdlib.h>
#include<stdio.h>
#include<math.h>	
	
	int main (int argc, char const *argv[]){
		float valorm, resultadom;
		int mes;
			printf("Insira o valor da multa \n");
			scanf("%f", &valorm);
			
			printf("Insira a quantidade de meses de atraso \n");
			scanf("%i", &mes);
			
		switch(mes){
			case 1:
			printf("O valor da multa e %f", valorm);
			break;
			
			case 2:
			resultadom = valorm * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 3:
			resultadom = valorm * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 4:
			resultadom = valorm * 1.05* 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 5:
			resultadom = valorm * 1.05 * 1.05 * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 6:
			resultadom = valorm  * 1.05 * 1.05 * 1.05 * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 7:
			resultadom = valorm  * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 8:
			resultadom = valorm  * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 9:
			resultadom = valorm  * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 10:
			resultadom = valorm  * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 11:
			resultadom = valorm  * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			case 12:
			resultadom = valorm  * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05 * 1.05;
			printf("O valor da multa e de %f", resultadom);
			break;
			
			default:
			printf("Error");
			break;
		}
		return 0;
	}
			
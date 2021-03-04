#include<stdlib.h>
#include<math.h>
#include<stdio.h>


	int main(int argc, char const *argv[]) {

		float a, b, x;
		char op;
		
		printf("Digite a operacao desejada: ");
			scanf(" %c", &op);
		
		printf("Digite o primeiro valor \n");
			scanf("%f", &a);

		printf("Digite o segundo valor \n");
			scanf("%f", &b);

		switch (op){
			case '+':

				x = a + b;
				printf("O resultado e \n %f", x);
			break;

			case '-':

				x = a - b;
				printf("O resultado e \n %f", x);
			break;

			case 'x':

				x = a * b;
				printf("O resultado e \n %f", x);
			break;

			case '/':

				x= a / b;
				printf("O resultado e \n %f", x);
			break;
			
			case ':':

				x= a / b;
				printf("O resultado e \n %f", x);
			break;

			case 'a':

				x= (2,3)*log(a);
				printf("O resultado do logaritmo e \n %f", x);
			break;

			case 'b':

				x= log(a)/log(b);
				printf("O resultado do logaritmo e \n %f", x);
			break;

			case 'c':

				x= pow(a,b);
				printf("O resultado e \n %f", x);
			break;

			case 'd':

				x= pow(a,1/b);
				printf("O resultado e \n %f", x);
			break;
			
			default:
				printf("Operacao invalida!\n");
				break;
			
		}
			return 0;
		}

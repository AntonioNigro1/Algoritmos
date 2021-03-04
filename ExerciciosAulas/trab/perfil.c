#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *agrv[]){
	
	int perfil, dm, ano, resto;
	
		printf("Digite o dia e o mes de seu nascimento sem / :\n");
			scanf("%i", &dm);
	
		printf("Digite o ano de seu nascimento: \n");
			scanf("%i", &ano);
			
		perfil= dm + ano;
		
	printf("O resultado e : %i \n", perfil);
	printf("Insira os 2 primeiros numeros do resultado\n");
		scanf("%i", &dm);
		
	printf("Insira os 2 ultimos numeros do resultado\n");
		scanf("%i", &ano);
		
		perfil= dm + ano;
		
		resto = perfil % 5;
		
		switch (resto){
			
			case 0:
				printf("O seu perfil e Timido");
				break;
			
			case 1:
				printf("O seu perfil e Sonhador");
				break;
				
			case 2:
				printf("O seu perfil e Paquerador");
				break;
				
			case 3:
				printf("O seu perfil e Atraente");
				break;
				
			case 4:
				printf("O seu perfil e Irresistivel");
				break;
				
			default:
				printf("O seu perfil e Irresistivel");
		}
		return 0;
}
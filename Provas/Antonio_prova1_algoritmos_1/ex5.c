#include <stdio.h>
#include <stdlib.h>

	int main (int argc, char const *argv[]){
		
		int mes;
		float valor, x;
		
		mes =atoi(argv[1]);
		valor = atof(argv[2]);
		
		if(mes == 1){
			printf("O valor sera %f", valor);
		}
		
		else if(mes == 2){
			x = valor * 1.05;
			printf("O valor sera \n%f\n", x);
		}
		
		else if(mes== 3){
			x= valor * 1.05 *1.05;
			printf("O valor sera \n%f\n", x);
		}
		
		else if(mes== 4 ){
			x= valor * 1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		}
		
		else if(mes== 5 ){
			x= valor * 1.05 *1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		}
		
		else if(mes== 6 ){
			x= valor * 1.05 *1.05 *1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		}
		
		else if(mes== 7 ){
			x= valor * 1.05 *1.05 *1.05 *1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		}
		
		else if(mes== 8 ){
			x= valor * 1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		}
		
		else if(mes== 9 ){
			x= valor * 1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		}
		
		else if(mes== 10 ){
			x= valor * 1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		}
		
		else if(mes== 11 ){
			x= valor * 1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		}
		
		else if(mes== 12 ){
			x= valor * 1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05 *1.05;
			printf("O valor sera %f", x);
		} else {
			printf("Erro, mes invalido");
		}
		return 0;
	}
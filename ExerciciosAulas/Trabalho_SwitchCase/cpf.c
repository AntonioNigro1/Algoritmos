#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11, cpf, r1, r2;
	printf("Digite seu cpf (Apenas numeros):");
	scanf("%i", &cpf);

	system ("clear || cls");
	printf("%i\n",cpf);
	d11 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d11, cpf);
	d10 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d10, cpf);
	d9 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d9, cpf);
	d8 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d8, cpf);
	d7 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d7, cpf);
	d6 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d6, cpf);
	d5 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d5, cpf);
	d4 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d4, cpf);
	d3 = cpf%10;
	cpf = cpf/10;
	printf("%i\n%i\n",d3, cpf);
	d2 = cpf%10;
	d1 = cpf/10;
	printf("%i\n%i\n",d2, d1);
	r1 = d1*10+d2*9+d3*8+d4*7+d5*6+d6*5+d7*4+d8*3+d9*2;
	r1 = r1%11;
	r1 = 11 -r1;
	
	switch(r1) {
		case 0 ... 10:
		r2 = d1*11+d2*10+d3*9+d4*8+d5*7+d6*6+d7*5+d8*4+d9*3+d10*2;
		r2 = r2%11;
		r2 = 11 -r2;
		break;
		default:
		printf("CPF invalido!\n");
		goto END;
		break;
	}
	switch(r2) {
		case 0 ... 10:
		printf("CPF valido");
		break;
		default:
		printf("CPF invalido");
		break;
	}
	END:
	return 0;
}

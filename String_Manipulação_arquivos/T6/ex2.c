#include<stdlib.h>
#include<stdio.h>
#define TAM 50

typedef struct{
	char sexo[1];
	int idade;
	char fumante[1];
}Pessoa;

void registrar_pessoas(int x, Pessoa pessoas[TAM]){
	int i;
	FILE *fp = fopen("resposta.bin","wb");
	
	
	setbuf(stdin, NULL);
	for(i=0;i<x;i++){
		printf("Sexo: (M para homem, F para mulher)\n");
		fgets(pessoas[i].sexo, 1, stdin);
		setbuf(stdin, NULL);
		
		printf("Idade:\n ");
		scanf("%i", &pessoas[i].idade);
		setbuf(stdin, NULL);
		
		printf("Fumante: (S ou N)\n");
		fgets(pessoas[i].fumante, 1, stdin);
		setbuf(stdin, NULL);
	}
	
	fwrite(pessoas, sizeof(Pessoa), x, fp);
	fclose(fp);
}

int porc_fumantes(int x, Pessoa pessoas[TAM]){
	FILE *fp = fopen("respostas.bi", "rb");
	float a, n, resultado;
	int i;
	n=0.0;
	a=0.0;
	for(i=0;i<x;i++){
		if(*pessoas[TAM].fumante == 83 || *pessoas[TAM].fumante == 115){
			a++;
		}
		n++;
	}
	
	resultado = (a*100.0)/n;
	fclose(fp);
	
	return (resultado);	
}

int homens_fumantes(int x, Pessoa pessoas[TAM]){
	FILE *fp = fopen("respostas.bin", "rb");
	float resultado, a=0.0, n=0.0;
	int i;
	
	for(i=0;i<x;i++){
		if(*pessoas[TAM].sexo = 77 && pessoas[TAM].idade < 40){
			n++;
			if(*pessoas[TAM].fumante == 83 || *pessoas[TAM].fumante == 115)
			a++;
		}
	}
	
	resultado = (a*100.0)/n;
	fclose(fp);
	
	return (resultado);
}

int mulheres_fumantes(int x, Pessoa pessoas[TAM]){
	FILE *fp = fopen("respostas.bin", "rb");
	float resultado, a=0.0, n=0.0;
	int i;
	
	for(i=0;i<x;i++){
		if(*pessoas[TAM].sexo == 70 && pessoas[TAM].idade > 40){
			n++;
			if(*pessoas[TAM].fumante == 83 || *pessoas[TAM].fumante == 115)
			a++;
		}
	}
	
	resultado = (a*100.0)/n;
	fclose(fp);
	
	return (resultado);
}


int main(int argc, char const* argv[]){
	float resultado_fumantes, resultadoM_fumantes, resultadoF_fumantes;
	int x;
	printf("Digite a quantidade de pessoas que deseja registrar: ");
	scanf("%i", &x);
	setbuf(stdin, NULL);
	
	Pessoa pessoas[TAM];
	
	registrar_pessoas(x, pessoas);
	
	resultado_fumantes = porc_fumantes(x, pessoas);
	
	resultadoM_fumantes = homens_fumantes(x, pessoas);
	
	resultadoF_fumantes = mulheres_fumantes(x, pessoas);
	
	printf("Em relação a pesquisa: \n");
	printf("%.3f porcento de pessoas em geral", resultado_fumantes);
	printf("%.3f porcento de homens fumantes com menos de 40 anos", resultadoM_fumantes);
	printf("%.3f porcento de mulheres fumantes acima de 40 anos", resultadoF_fumantes);
	
	return 0;
}
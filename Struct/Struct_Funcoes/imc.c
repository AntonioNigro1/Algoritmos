#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[1024];

typedef struct {
	string nome;
	float altura;
	float peso;
	long int cpf;
	char sexo;
	float imc;
} dados;

//registra os dados no vetor participantes
void registro(int n, dados participantes[n]) {
	for (int i = 0; i < n; ++i)	{
		printf("\n");
		printf("Digite o nome:\n");
		fgets(participantes[i].nome, 1024, stdin);
		printf("Digite a altura:\n");
		scanf("%f", &participantes[i].altura);
		setbuf(stdin, NULL);
		printf("Digite o peso:\n");
		scanf("%f", &participantes[i].peso);
		setbuf(stdin, NULL);
		printf("Digite o cpf:\n");
		scanf("%li", &participantes[i].cpf);
		setbuf(stdin, NULL);
		printf("Digite o sexo (F/M):\n");
		scanf("%c", &participantes[i].sexo);
	}
}

//calcula e imprime o imc
void imc (int n, dados participantes[n]) {
	for (int i = 0; i < n; ++i)	{
		participantes[i].imc = (participantes[i].peso/(participantes[i].altura * participantes[i].altura));
		printf("\nNome:%sAltura:%.2f\nPeso:%.2f\nCPF:%li\nSexo:%c\nIMC:%f\n", participantes[i].nome,participantes[i].altura,participantes[i].peso,participantes[i].cpf,participantes[i].sexo,participantes[i].imc);
		setbuf(stdin, NULL);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Digite o numero de participantes:\n");
	scanf("%i", &n);
	setbuf(stdin, NULL);

	dados participantes[n];

	registro(n, participantes);
	imc(n, participantes);

	return 0;
}
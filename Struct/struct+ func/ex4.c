#include <stdlib.h>
#include <stdio.h>


typedef struct{
	char nome[10];
	char sobrenome[15];
	int nascimento;
	int cpf;
	int admissao;
	int salario;
} Colaborador;

int armazenfunc(int n){
	
	Colaborador colab[n];
	
	int i;
	
	for(i=0;i<n;i++){
		printf("Digite apenas o primeiro nome do funcionario\n");
		scanf(" %s", &colab[i].nome);
		
		printf("Digite o ultimo sobrenome do funcionario\n");
		scanf(" %s", &colab[i].sobrenome);
		
		printf("Digite o cpf do funcionario (apenas numeros)\n");
		scanf(" %i", &colab[i].cpf);
		
		printf("Digite o salario do funcionario\n");
		scanf(" %i", &colab[i].salario);

		printf("Digite a data de nascimento do funcionario(apenas numeros)\n");
		scanf(" %i", &colab[i].nascimento);
		
		printf("Digite a data de admissao do funcionario (apenas numeros)\n");
		scanf(" %i", &colab[i].admissao);

	}
}

int mostrarfunc(int n){
	
	int z;
	
	Colaborador colab[n];
	
	for(z=0;z<n;z++){
		printf("Funcionario: %i\n", z+1);
		printf("Nome: %s %s\n", colab[z].nome, colab[z].sobrenome);
		printf("Cpf: %i\n", colab[z].cpf);
		printf("Salario: %i\n", colab[z].salario);
		printf("Data de nascimento: %i\n", colab[z].nascimento);
		printf("Data de admissao: %i\n", colab[z].admissao);

	}
	
}

int main (int argc, char const *argv[]){
	int n;
	
	printf("Digite o numero de funcionarios ");
	scanf("%i", &n);
	
	armazenfunc(n);
	
	mostrarfunc(n);

	return 0;
}
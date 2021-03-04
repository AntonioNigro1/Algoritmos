#include <stdlib.h>
#include <stdio.h>
#define TAM 4


typedef char string[100];

typedef struct {
	int cod;
	string nome;
} Funcionario;

int main(int argc, char const *argv[]){
	
	Funcionario funcionarios[TAM]={
	{1, "joao"},
	{2, "maria"},
	{3, "pedro"},
	{4, "paula"}
	};
	
	FILE *fp = fopen("bd.bin","wb");
	
	fwrite(funcionarios, sizeof(Funcionario), TAM, fp);
	
	fclose(fp);
	
	return 0;
}
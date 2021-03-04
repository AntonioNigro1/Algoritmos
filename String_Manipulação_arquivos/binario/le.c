#include <stdlib.h>
#include <stdio.h>
#define TAM 4
typedef char string[100];

typedef struct {
	int cod;
	string nome;
} Funcionario;

int main(int argc, char const *argv[]){
	int i;
	FILE *fp = fopen("bd.bin","rb");
	
	Funcionario funcionarios[TAM];
	fread(funcionarios, sizeof(Funcionario), TAM, fp);
	
	for(i=0;i<TAM;++i){
	printf("Cod: %i\n", funcionarios[i].cod);
	printf("Nome: %s\n", funcionarios[i].nome);
	};
	
	/*le o tamano do arquivo*/
	rewind(fp);
	fseek(fp, 0, SEEK_END);
	
	int pos = ftell(fp);
	
	size_t size = pos / sizeof(Funcionario);
	printf("qtd de funcionarios: %lu\n", size);
	
	/*--------------------*/
	fclose(fp);
	
	return 0;
}
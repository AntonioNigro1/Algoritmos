#include <stdlib.h>
#include <stdio.h>
#define TAM 100

typedef struct{
	int chave;
	char dado2[30];
	float dado3[4];
}Registro;

void Cadastrar(FILE *fp, int x, Registro registros[TAM]){
	int i;
	for(i=0;i<x;i++){
		printf("Digite a chave inicial do cadastro:\n");
		scanf("%i", &registros[i].chave);
		setbuf(stdin, NULL);
		
		printf("Digite a string de dados:\n");
		fgets(registros[i].dado2, 30, stdin);
		setbuf(stdin, NULL);
		
		printf("Digite o primeiro valor real");
		scanf("%f", &registros[i].dado3[0]);
		setbuf(stdin, NULL);
		
		printf("Digite o segundo valor real");
		scanf("%f", &registros[i].dado3[1]);
		setbuf(stdin, NULL);
		
		printf("Digite o terceiro valor real");
		scanf("%f", &registros[i].dado3[2]);
		setbuf(stdin, NULL);
		
		printf("Digite o quarto valor real");
		scanf("%f", &registros[i].dado3[3]);
		setbuf(stdin, NULL);
		
	}
		fwrite(registros, sizeof(Registro), x, fp);
		fclose(fp);
}

int Remove_int(FILE *fp, int x, Registro registros[TAM]){
	fread(registros, sizeof(Registro), TAM, fp);
	int i;
	registros[x].chave=(0);
	for(i=0;i<30;i++){
	registros[x].dado2[i]='\0';
	}
	for(i=0;i<4;i++){
	registros[x].dado3[i]=(0.0);
	}
	fwrite(registros, sizeof(x), 1, fp);
	if(registros[x].chave = 0){
		fclose(fp);
		return 1;
	}
	if(registros[x].chave != 0){
		fclose(fp);
		return 0;
	}
} 

int main(int argc, char const *argv[]){
	int x, i;
	Registro registros[TAM];
	FILE *fp = fopen("arq.bin","rb");
	
	printf("Digite quantas chaves deseja cadastrar:");
	scanf("%i", &x);
	setbuf(stdin, NULL);
	Cadastrar(fp, x, registros);
	x=0;
	
	printf("Digite o numero do registro que deseja apagar:");
	scanf("%i", &x);
	setbuf(stdin, NULL);
	i=Remove_int(fp, x, registros);
	
	if(i==1)
		printf("Remoção bem sucedida");
	if(i==0)
		printf("Remoção mal sucedida");
	
	fclose(fp);
	return 0;
}
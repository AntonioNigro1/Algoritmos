#include <stdlib.h>
#include <stdio.h>
#define TAM 50
typedef struct{
	char matricula[3];
	char nome[30];
	float notas[3];
	float media;
}Aluno;

void registra(int x,Aluno alunos[TAM]){
	int i;
	FILE *fp = fopen("alunos.bin", "wb");
	
	for(i=0;i<x;i++){
		printf("Digite o nome do aluno: ");
		fgets(alunos[i].nome, 30, stdin);
		setbuf(stdin, NULL);
		/* se eu usar a parte da matricula ele me da problemas na hora de rodar o .exe,
		não me deixa colocar as informações da "primeira nota".
		
		printf("Digite o numero da matricula: ");
		fgets(alunos[i].matricula, 3, stdin);
		setbuf(stdin, NULL);
		*/
		printf("Insira a primeira nota do aluno: ");
		scanf("%f", &alunos[i].notas[0]);
		setbuf(stdin, NULL);
		
		printf("Insira a segunda nota do aluno: ");
		scanf("%f", &alunos[i].notas[1]);
		setbuf(stdin, NULL);
		
		printf("Insira a terceira nota do aluno: ");
		scanf("%f", &alunos[i].notas[2]);
		setbuf(stdin, NULL);
	}
	
	for(i=0;i<x;i++){
		alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2])/3;
	}
		fwrite(alunos, sizeof(Aluno), x, fp);
		fclose(fp);
}

void imprimir_alunos(int x, Aluno alunos[TAM]){
	int i;
	
	FILE *fp = fopen("alunos.bin","rb");
	fread(alunos, sizeof(Aluno), TAM, fp);
	for(i=0;i<x;i++){
		printf("Matricula: %s\n", alunos[i].matricula);
		printf("Aluno: %s\n", alunos[i].nome);
		printf("Media: %f\n", alunos[i].media);
		if(alunos[i].media >= 8.5)
			printf("Excelente\n");
		if(alunos[i].media >= 7.0 && alunos[i].media <8.5)
			printf("Bom\n");
		if(alunos[i].media <7.0)
			printf("Preocupante\n");
		printf("----------------------------------------\n");
	}
	
	fclose(fp);
}

int main(int argc, char const* argv[]){
	int x;
	Aluno alunos[TAM];
	
	printf("Insira o numero de alunos que deseja cadastrar: ");
	scanf("%i", &x);
	setbuf(stdin, NULL);
	
	registra(x, alunos);
	
	imprimir_alunos(x, alunos);
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct{
	char matricula[3];
	char nome[30];
	float nota1, nota2, nota3;
	float media;
	char conceito[15];
}Aluno;

void gravar_alunos(FILE *fp, Aluno alunos[N]){
	alunos[0].nome == "joao";
	alunos[0].matricula == "001";
	alunos[0].nota1 = 5.0;
	alunos[0].nota2 = 7.0;
	alunos[0].nota3 = 3.0;
	
	alunos[1].nome == "pedro";
	alunos[1].matricula == "002";
	alunos[1].nota1 = 6.0;
	alunos[1].nota2 = 6.0;
	alunos[1].nota3 = 7.0;
	
	alunos[2].nome == "maria";
	alunos[2].matricula == "003";
	alunos[2].nota1 = 8.0;
	alunos[2].nota2 = 2.0;
	alunos[2].nota3 = 5.0;
	
	alunos[3].nome == "ana";
	alunos[3].matricula == "004";
	alunos[3].nota1 = 8.5;
	alunos[3].nota2 = 7.0;
	alunos[3].nota3 = 4.0;
	
	alunos[4].nome == "maria jose";
	alunos[4].matricula == "005";
	alunos[4].nota1 = 10.0;
	alunos[4].nota2 = 9.0;
	alunos[4].nota3 = 8.0;
	
	fwrite(alunos, sizeof(Aluno), N, fp);
}

void gravar_medias(FILE *fp, Aluno alunos[N]){
	FILE *arq = fopen("conceito.bin","wb");
	int i;
	float media;
	for(i=0;i<N;i++){
		alunos[i].media= (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
		if(alunos[i].media > 9.0)
			alunos[i].conceito == "Excelente";
		if(alunos[i].media <=9.0 && alunos[i].media> 8.0)
			alunos[i].conceito == "Bom";
		if(alunos[i].media <=8.0 && alunos[i].media > 7.0)
			alunos[i].conceito == "Regular";
		if(alunos[i].media <=7.0)
			alunos[i].conceito == "Preocupante";
	}
	
	fwrite(alunos, sizeof(Aluno), N, arq);
	
	fclose(arq);
}


int main(int argc, char const *argv[]){
	Aluno alunos[N];
	FILE *fp = fopen("alunos.bin","wb");
	
	gravar_alunos(fp, alunos);
	
	gravar_medias(fp, alunos);
	
	return 0;
}
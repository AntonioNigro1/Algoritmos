#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[1024];

typedef struct {
	int matricula;
	string nome;
	int nota1;
	int nota2;
	float media;
} aluno;

//entrada dos dados dos alunos
void registro(int n, aluno alunos[n]){
	for (int i = 0; i < n; ++i)	{
		printf("\n");
		printf("Digite a matricula:\n");
		scanf("%i", &alunos[i].matricula);
		setbuf(stdin, NULL);
		printf("Digite o nome:\n");
		fgets(alunos[i].nome, 1024, stdin);
		setbuf(stdin, NULL);
		printf("Digite a nota 1:\n");
		scanf("%i", &alunos[i].nota1);
		setbuf(stdin, NULL);
		printf("Digite a nota 2:\n");
		scanf("%i", &alunos[i].nota2);
		setbuf(stdin, NULL);
	}
}

//calcula e imprime a media do aluno[i]
void imprime_media (int n, aluno alunos[n]){
	for (int i = 0; i < n; ++i) {
		alunos[i].media = (alunos[i].nota1 + alunos[i].nota2)/2;
		printf("\nMtricula:%i\nNome:%s\nMedia:%f\n", alunos[i].matricula, alunos[i].nome, alunos[i].media);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Digite a quantidade de alunos:\n");
	scanf(" %i", &n);
	setbuf(stdin, NULL);
	aluno aluno[n];
	registro(n, aluno);

	imprime_media(n, aluno);

	return 0;
}

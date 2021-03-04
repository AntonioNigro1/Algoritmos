#include <stdlib.h>
#include <stdio.h>

int palavras_iguais(char A[500], char B[500]){
	int i, x=0, j=0, palavras=0;
	
//checa a quantidade de espaços na string A
	for(i=0;A[i]!='\0';i++){
		if(A[i]=' ')
			x++;
	}
	int Vtemp[x];//cria um vetor com o numero de espaços da string A
	
	for(i=0;A[i]!='\0';i++){ //armazena em que posição de A o espaço estava
		if(A[i]=' '){
			Vtemp[j]=i;
			j++;
		}
	}
	
/* roda a string A inteira e compara com B caso existam letras diferentes ele
passa para o proximo elemento do vtemp(localização do proximo espaço) e continua rodando o vetor apartir
do espaço anterior	*/
		for(j;j<=Vtemp[i];j++){
			if(A[j]!=B[j]){
				j=Vtemp[i];
				i++;
			}
			
			if(j=Vtemp[i])
				palavras++;
		}
	return (palavras);
}

int main(int argc, char const *argv[]){
	char A[500], B[500];
	int iguais;
	
	printf("Digite o conteudo da primeira string:\n");
	fgets(A, 500, stdin);
	setbuf(stdin, NULL);
	
	printf("Digite o conteudo da segunda string:\n");
	fgets(B, 500, stdin);
	setbuf(stdin, NULL);
	
	iguais = palavras_iguais(A, B);
	
	printf("Nas strings existem: %i palavras iguais");
	
	return 0;
}
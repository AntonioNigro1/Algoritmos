#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 121

typedef struct{
	float temperatura;
}Dia;

void registrar_temp(Dia dias[TAM]){
	FILE *fp= fopen("temperatura.txt","wb");
	int i;
	srand(time(NULL));
	for(i=0;i<TAM;i++){
		dias[i].temperatura= (float)(((rand()%241)+156)/10.0);	
	}	
	
	fwrite(dias, sizeof(Dia),TAM, fp);
	fclose;
}

int menor_temp(Dia dias[TAM]){
	FILE *fp= fopen("temperatura.txt","r");
	int i, x;
	x= dias[0].temperatura;
	for(i=0;i<TAM;i++){
		if(x>dias[i].temperatura)
			x= dias[i].temperatura;
	}
	
	return (x);
}

int maior_temp(Dia dias[TAM]){
	FILE *fp= fopen("temperatura.txt","r");
	int i, x;
	x= dias[0].temperatura;
	for(i=0;i<TAM;i++){
		if(x<dias[i].temperatura)
			x= dias[i].temperatura;
	}
	
	return (x);
}

int temp_media(Dia dias[TAM]){
	FILE *fp= fopen("temperatura","r");
	int i, soma=0;
	float x;
	for(i=0;i<TAM;i++){
		soma= soma+ dias[i].temperatura;
	}
	x= soma/TAM;
	
	return (x);
}

int maior_media(Dia dias[TAM]){
	FILE *fp= fopen("temperatura","r");
	int i, x=0, media;
	media = temp_media(dias);
	for(i=0;i<TAM;i++){
		if(dias[i].temperatura > media)
			x++;
	}
	
	return (x);
}

int menor_media(Dia dias[TAM]){
	FILE *fp= fopen("temperatura","r");
	int i, x=0, media;
	media = temp_media(dias);
	for(i=0;i<TAM;i++){
		if(dias[i].temperatura < media)
			x++;
	}
	
	return (x);
}

int main(int argc, char const *argv[]){
	Dia dias[TAM];
	int menor, maior, maiores_media, menores_media;
	float media;
	
	registrar_temp(dias);
	menor=menor_temp(dias);
	maior=maior_temp(dias);
	media=temp_media(dias);
	maiores_media=maior_media(dias);
	menores_media=menor_media(dias);
	
	printf("A menor temperatura foi %i\n", menor);
	printf("A maior temperatura foi %i\n", maior);
	printf("A media foi: %.3f\n", media);
	printf("Tivemos %i dias com temperatura acima da media\n", maiores_media);
	printf("Tivemos %i dias com temperatura abaixo da media\n", menores_media);
	
	return 0;
}
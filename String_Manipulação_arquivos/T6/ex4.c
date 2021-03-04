#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 100

typedef struct{
	int voto;
}Eleitor;

void gera_votos(Eleitor eleitores[TAM]){
	FILE *fp = fopen("votos.txt","w+");
	int i;
	srand(time(NULL));
	for(i=0;i<100;i++){
		
		eleitores[i].voto = (rand() % 6);
		putc(eleitores[i].voto, fp);
		putc('\n', fp);
	
	}

	fclose(fp);
}

int mais_votado(Eleitor eleitores[TAM]){
	FILE *fp= fopen("votos.txt", "w+");
	int i, a=0, b=0, c=0, d=0, e=0;
	fread(eleitores, sizeof(Eleitor), TAM, fp);
	for(i=0;i<100;i++){
		if(eleitores[i].voto == 1)
			a++;
		if(eleitores[i].voto == 2)
			b++;
		if(eleitores[i].voto == 3)
			c++;
		if(eleitores[i].voto == 4)
			d++;
		if(eleitores[i].voto == 5)
			e++;
		
	}
	if(a>b && a>c && a>d && a>e){
		return (a);
	}else if(b>c && b>d && b>e){
		return(b);
	}else if(c>d && c>e){
		return(c);
	}else if(d>e){
		return(d);
	}else{
		return(e);
	}
}

int id_mais_votado(Eleitor eleitores[TAM]){
	FILE *fp= fopen("votos.txt", "w+");
	int i, a=0, b=0, c=0, d=0, e=0;
	fread(eleitores, sizeof(Eleitor), TAM, fp);
	for(i=0;i<100;i++){
		if(eleitores[i].voto == 1)
			a++;
		if(eleitores[i].voto == 2)
			b++;
		if(eleitores[i].voto == 3)
			c++;
		if(eleitores[i].voto == 4)
			d++;
		if(eleitores[i].voto == 5)
			e++;
		
	}
	printf("A:%i, B:%i, C:%i, D:%i, E:%i\n", a, b, c, d, e);
	if(a>b && a>c && a>d && a>e){
		return (1);
	}else if(b>c && b>d && b>e){
		return(2);
	}else if(c>d && c>e){
		return(3);
	}else if(d>e){
		return(4);
	}else{
		return(5);
	}
	
}

int menos_votado(Eleitor eleitores[TAM]){
	FILE *fp= fopen("votos.txt", "w+");
	int i, a=0, b=0, c=0, d=0, e=0;
	fread(eleitores, sizeof(Eleitor), TAM, fp);
	for(i=0;i<100;i++){
		if(eleitores[i].voto == 1)
			a++;
		if(eleitores[i].voto == 2)
			b++;
		if(eleitores[i].voto == 3)
			c++;
		if(eleitores[i].voto == 4)
			d++;
		if(eleitores[i].voto == 5)
			e++;
		
	}
	if(a<b && a<c && a<d && a<e){
		return (a);
	}else if(b<c && b<d && b<e){
		return(b);
	}else if(c<d && c<e){
		return(c);
	}else if(d<e){
		return(d);
	}else{
		return(e);
	}
}

int id_menos_votado(Eleitor eleitores[TAM]){
	FILE *fp= fopen("votos.txt", "w+");
	int i, a=0, b=0, c=0, d=0, e=0;
	fread(eleitores, sizeof(Eleitor), TAM, fp);
	for(i=0;i<100;i++){
		if(eleitores[i].voto == 1)
			a++;
		if(eleitores[i].voto == 2)
			b++;
		if(eleitores[i].voto == 3)
			c++;
		if(eleitores[i].voto == 4)
			d++;
		if(eleitores[i].voto == 5)
			e++;
		
	}
	if(a<b && a<c && a<d && a<e){
		return (1);
	}else if(b<c && b<d && b<e){
		return(2);
	}else if(c<d && c<e){
		return(3);
	}else if(d<e){
		return(4);
	}else{
		return(5);
	}
}

int votos_nulos(Eleitor eleitores[TAM]){
	FILE *fp= fopen("votos.txt", "w+");
	int i, x=0;
	
	for(i=0;i<100;i++){
		if(eleitores[i].voto == 0)
			x++;
	}
	
	return (x);
}

int main(int argc, char const *argv[]){
	Eleitor eleitores[TAM];
	int vencedor, id_vencedor, ultimo, id_ultimo, nulos;
	gera_votos(eleitores);
	
	vencedor = mais_votado(eleitores);
	id_vencedor = id_mais_votado(eleitores);
	ultimo = menos_votado(eleitores);
	id_ultimo = id_menos_votado(eleitores);
	nulos = votos_nulos(eleitores);
	
	printf("O vencedor foi o candidato: %i com %i votos\n", id_vencedor, vencedor);
	printf("O ultimo lugar foi do candidato: %i, com %i votos\n", id_ultimo, ultimo);
	printf("Tivemos %i votos nulos\n", nulos);
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 5

typedef struct {
	int x;
	int y;	
} coordenada;

//registra as coordenadas (x,y)
void registro (coordenada xy[n]){
	for (int i = 0; i < n; ++i)
	{
		printf("Digite a coordenada x do ponto %i:\n", i);
		scanf("%i", &xy[i].x);
		setbuf(stdin, NULL);
		printf("Digite a coordenada y do ponto %i:\n", i);
		scanf("%i", &xy[i].y);
		setbuf(stdin, NULL);
	}
}


//calcula as distancias entre P[0] e P[i]
void distancias (coordenada paq[n]) {
	float dis[n];
	for (int i = 1; i < n; ++i)
	{
		dis[0] = 0;
		dis[i] = sqrt(pow(paq[0].x-paq[i].x,2)+pow(paq[0].y-paq[i].y,2));
	}
}

//descobrindo o menor valor P[i]
int menor (float dis[n]){
	int resp;
	if (dis[1]<dis[2] && dis[1]<dis[3] && dis[1]<dis[4]) {
		resp = 1;
	} else if (dis[2]<dis[3] && dis[2]<dis[4]) {
		resp = 2;
	} else if (dis[3]<dis[4]) {
		resp = 3;
	} else {
		resp = 4;
	}
	return resp;
}

//imprime distancia
void imprime (int i, coordenada xy[n]){
	printf("Menor distancia eh entre o ponto (%i,%i) e o ponto (%i,%i)\n", xy[0].x,xy[0].y,xy[i].x,xy[i].y);
}

int main(int argc, char const *argv[])
{
	coordenada coord[n];
	registro(coord);
	int temp = menor(distancias);
	imprime(temp, coord);

	return 0;
}
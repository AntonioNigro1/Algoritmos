#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void posicao_projetil(float w, float v){
	float x=1.0, y=1.0, t=0.1;
	if(w>0 && w<(3.14159/2)){
		while(y>0){
			x=(v* cos(w)) * t;
			y=((v*sin(w)) * t) - ((1/2)*9.8*pow(t,2));
			printf("A posicao do projetil, x: %.2f, y: %.2f\n", x, y);
			t=t+0.10;
		}
	}
	else {
		printf("ANGULO INVALIDO");
	}
}

int main (int argc, char const *argv[]){
	float x, y, w, v;
	
	printf("Digite o angulo em radianos(0<angulo<pi/2): ");
	scanf("%f", &w);
	
	printf("Digite a velocidade (m/s): ");
	scanf("%f", &v);
	
	posicao_projetil(w, v);

	return 0;
}
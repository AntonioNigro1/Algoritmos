#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
	int H[4] = {4, 5, 7, 2};
	int F[4] = {6, 8, 6, 4};
	int n = 4, somaf = 0, somah = 0, somafh = 0, i;
	float r, r1, r2, fsomaf, fsomah;
	
	for(i=0; i<4; i++){
		somaf= somaf + F[i];
	}
	
	for(i=0; i<4; i++){
		somah= somah + H[i];
	}
	
	printf("%i\n%i\n", somaf, somah);
	r1= n*somah*somaf - somah-somaf;
	
	somaf=0;
	somah=0;
	for(i=0; i<4; i++){
		somaf= somaf +pow(F[i],2);
	}
	
	for(i=0; i<4; i++){
		somah= somah + pow(H[i],2);
	}
		
	
	printf("%i\n%i\n", somaf, somah);
	
	r2= n*somah- (somah * (n*somaf)) - somaf;
	
	printf("%f\n%f\n",r1, r1);
	
	r2= sqrt(r2);
	
	printf("%f\n", r2);
	
	r= r1/r2;
	
	if(r1>0.85)
		printf("Coeficiente = %f\nEstas variaveis parecem ser fortemente correlacionadas", r1);
	else{
		printf("Coeficiente = %f", r1);
	}
	return 0;
}
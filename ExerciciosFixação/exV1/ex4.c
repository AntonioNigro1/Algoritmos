#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	
	int A[20], i;
	float dm, somadm, mediadm, xi; 
	
	for(i=0; i<20; i++){
		A[i]= 1 + rand () % 100;
	}
		somadm=0;
			for(i=0; i<20; i++){
				somadm= somadm + A[i];
			}
			mediadm= somadm/20;
			
			xi= (mediadm*somadm)/20;
			
			dm= mediadm *(somadm -xi);
			
			printf("O resultado do desvio medio e %f\n", dm);
	
	
	float x, rmq, xrmq;
	
			xrmq=0;
			for(i=0; i<20; i++){
				x=pow(A[i],2);
			}
				rmq= sqrt((mediadm*x)/20);
				
				printf("O resultado da Raiz media quadratica e %f\n", rmq);
				
	float div, mh;
			
			for(i=0; i<20; i++){
				div=div+ (1/A[i]);
			}
			
			mh= 20/(somadm*div);
			
			printf("O resultado da media harmonica e %f\n", mh);
			
	float at, maxr, minr;		
	int max, min;
		max=10; maxr=0.0;
		min=1; minr=0.0;
			
			for(i=0; i<20; i++){
			maxr= maxr+ (max*A[i]);
			minr= minr+ (min*A[i]);
			}
			at= maxr-minr;
			
			printf("A amplitude total e de %f\n", at);
			
	float multv, mg;	
			multv= 1.0;
			for(i=0; i<20; i++){
				multv= multv* A[i];
			}
			
		mg= pow(multv,1.0/20.0);
		
		printf("A media geometrica e %f", mg);
		
	return 0;
}	
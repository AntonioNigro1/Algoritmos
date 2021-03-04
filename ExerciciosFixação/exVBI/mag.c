#include <stdlib.h>
#include <stdio.h>

int main (int argc, char const *argv[]){
	int M1[3][3];
	int i, j, x, re;
	
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
		}
	}
		re=0;
	x = M1[0][0]+M1[1][1]+M1[2][2];
	
	if(x!=M1[0][0]+M1[0][1]+M1[0][2])
		re=1;
	
	if(x!=M1[1][0]+M1[1][1]+M1[1][2])
		re=1;
	
	if(x!=M1[2][0]+M1[2][1]+M1[2][2])
		re=1;
	
	if(x!=M1[0][0]+M1[1][0]+M1[2][0])
		re=1;
	
	if(x!=M1[0][1]+M1[1][1]+M1[2][1])
		re=1;
	
	if(x!=M1[0][2]+M1[1][2]+M1[2][2])
		re=1;
	
	if(x!=M1[0][2]+M1[1][1]+M1[2][0])
		re=1;
	
	if(re=0){
		printf("A matrix e um quadrado magico");
	}else{
		printf("A matrix nao e um quadrado magico");
	}
	
	return 0;
}
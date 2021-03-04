#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	
	int M1[3][3] = { {1,0,0},{0,1,0},{0,0,1}};
	int i, j, k, x=0, perm=0;
	
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		
			if((M1[i][j] > 1) &&(M1[i][j] < 0)){
				perm=1;
			
				if((M1[i][j] == 1) && (x==0))
					x=1;
				
					if((x==1) && (j==3)){
					x=0;
					
						if((M1[i][j] == 1) && (x==1))
						perm=1;
					}
			}
		}
	}
	
	if(perm=1){
		printf("Nao e matriz permutacao");
	}else{
		printf("E uma matriz permutacao");
	}
	
	return 0;	
}
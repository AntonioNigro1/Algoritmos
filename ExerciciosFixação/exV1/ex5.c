#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]){
		int V[10] = {15, 31, 23, 15, 75, 23, 41, 15, 31, 85};
		int V2[10], i, j, check, x;
		x=0;
		check=0;
		
		for(i=0; i<10; i++){
			if(i==0){
				V2[x]=V[i];
				x++;
			}
				else{
					check=0;
					for(j=0;j<x;j++){
						if(V[i]==V2[j])
							check++;
					}
				
					if(check<1){
						V2[x]= V[i];
						x++;
					}
				}
		}
		
		for(i=0;i<x;i++){
			printf("a posicao %i, contem o valor %i\n", i, V2[i]);
		}
		
	return 0;
}
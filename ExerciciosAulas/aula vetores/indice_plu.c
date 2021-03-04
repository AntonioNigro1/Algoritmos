#include <stdlib.h>
#include <stdio.h>

	int main (int argc, char const *argv[]){
		float min, max, ind, r;
		int grupo[9], i, n, x;
			i=0;
			n=30;
			min = 1.0;
			max = 99.0;
			x=0;
			if (i<=n){
				srand(time(NULL));
				r = rand()/(float)RAND_MAX;
				ind = min+(max-min)*r;
					
					if (ind>=0 && ind<10){
					grupo[0]+=1;
					i++;
					}
					
					if (ind>=10 && ind<20){
					grupo[1]+=1;
					i++;
					}
					
					if (ind>=20 && ind<30){
					grupo[2]+=1;
					i++;
					}
					
					if (ind>=30 && ind<40){
					grupo[3]+=1;
					i++;
					}
					
					if (ind>=40 && ind<50){
					grupo[4]+=1;
					i++;
					}
					
					if (ind>=50 && ind<60){
					grupo[5]+=1;
					i++;
					}
					
					if (ind>=60 && ind<70){
					grupo[6]+=1;
					i++;
					}
					
					if (ind>=70 && ind<80){
					grupo[7]+=1;
					i++;
					}
					
					if (ind>=80 && ind<90){
					grupo[8]+=1;
					i++;
					}
					
					if (ind>=90 && ind<100){
					grupo[9]+=1;
					i++;
					}
					
			}
					if(i>n  && x!=10){
						printf("O grupo %i teve %i leituras\n", x, grupo[x]);
						x++;
					}
					return 0;
	}
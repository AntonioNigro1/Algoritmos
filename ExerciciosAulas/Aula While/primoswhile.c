#include <stdlib.h>
#include <stdio.h>

	int main(int argc, char const argv[]){
		int n, d, div;
		d=0;
		n=1;
		div=1;
				while(n>=1 && n<100)
				{
						while(div>=1 && div<=100){
							div++;
								If(n%div==0);
									d++;
								
								
						}
						if(d<=2){
							printf("%i" ,n);
						}
						d =0;
						n++;
				}
	return 0;
	}
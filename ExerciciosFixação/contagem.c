#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){
	int m, s, ml;
	m=10;
	s=59;
	ml=999;
	
		while(m>=0 && s>=0 && ml>=0){
			printf("%i : %i : %i \n", m, s, ml);
			ml--;
						if(ml==0){
							s= s-1;
								ml=999;
						}
									if(s==0 && m>0){
									s=59;
									m= m-1;
									}
		}				
		
	return 0;
}
			
				
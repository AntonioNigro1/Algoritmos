#include <stdlib.h>
#include <stdio.h>

	int main(int argc, char const *argv[])
{
	
	int CARROS[5][5][3]=	{	{{0,1907,3},{1,2015,3},{2,2010,0},{1,1980,0},{3,1971,2}},
								{{3,1903,3},{2,1993,0},{2,1996,2},{3,2007,0},{3,2007,3}},
								{{2,2014,3},{1,2017,2},{2,2018,3},{1,2009,1},{1,2008,1}},
								{{2,2005,3},{3,2001,3},{3,2002,0},{0,2000,3},{1,2000,3}},
								{{1,2001,1},{2,2002,3},{0,1941,3},{3,1936,2},{3,1995,0}}
							};
							
	int i, j, k, x=0, fab0=0, fab1=0, fab2=0, fab3=0, fb0=0, fb1=0, fb2=0, fb3=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((CARROS[i][j][1]<1910)&&(CARROS[i][j][2])>1)
				x++;
			
			if(CARROS[i][j][0]=0)
				fab0++;
			
			if(CARROS[i][j][0]=1)
				fab1++;
			
			if(CARROS[i][j][0]=2)
				fab2++;
			
			if(CARROS[i][j][0]=3)
				fab3++;
			
			if((CARROS[i][j][0]=0)&&(CARROS[i][j][2]>1))
				fb0++;
			
			if((CARROS[i][j][0]=1)&&(CARROS[i][j][2]>1))
				fb1++;
			
			if((CARROS[i][j][0]=2)&&(CARROS[i][j][2]>1))
				fab2++;
			
			if((CARROS[i][j][0]=3)&&(CARROS[i][j][2]>1))
				fab3++;
		}
	}
	
	if(fab0>fab1 && fab2 && fab3){
		printf("O fabricante mais popular e 0\n");
		}
	if(fab1> fab2 && fab3){
		printf("O fabricante mais popular e 1\n");
	}
	if(fab2>fab3){
		printf("O fabricante mais popular e 2\n");
	}
	else{
		printf("O fabricante mais popular e 3\n");
	}
	
	if(fb0> fb1 && fb2 && fb3){
		printf("O fabricante com melhores carros e 0\n");
	}
	else if(fb1>fb2 && fb3){
		printf("O fabricante com melhores carros e 1\n");
	}
	else if(fb2>fb3){
		printf("O fabricante com melhores carros e 2\n");
	}
	else{
		printf("O fabricante com melhores carros e 3\n");
	}
	
	printf("A %i carros feitos antes de 1910 com condicoes boas ou excelentes", x);
	
	
	
	return 0;
	
	
}
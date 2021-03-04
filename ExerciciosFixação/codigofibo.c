#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[]){
	int n, fab1, fab2, fab, i;
	n= 10;
	fab1= 0;
	fab2= 1;
	fab= 0;
	i= 0;
	
	printf("Os primeiros 10 termos da sequencia de fibonacci sao: \n",n);
	
	for(i=0; 1<= n ; i++)
	{
		printf("%d", fab1);
		fab = fab1+fab2;
		fab1 = fab2;
		fab2 = fab;
	}
	
	getch();
	return 0;
}
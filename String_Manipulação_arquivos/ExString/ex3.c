#include <stdlib.h>
#include <stdio.h>

int main (int argc, char const* argv[]){
	
	char diario[1000];
	
	fputs("Digite o texto a ser descriptografado");
	fgets(diario, 1000, stdin);
	
		for(i=0; diario[i]!='\0'; ++i){
			if(diario[i]=='a')diario[i]='y';
		else
			if(diario[i]=='b')diario[i]='z';
		else
			if(diario[i]=='c')diario[i]='a';
		else
			if(diario[i]=='d')diario[i]='b';
		else
			if(diario[i]=='e')diario[i]='c';
		else
			if(diario[i]=='f')diario[i]='d';
		else
			if(diario[i]=='g')diario[i]='e';
		else
			if(diario[i]=='h')diario[i]='f';
		else
			if(diario[i]=='i')diario[i]='g';
		else
			if(diario[i]=='j')diario[i]='h';
		else
			if(diario[i]=='k')diario[i]='i';
		else
			if(diario[i]=='l')diario[i]='j';
		else
			if(diario[i]=='m')diario[i]='k';
		else
			if(diario[i]=='n')diario[i]='l';
		else
			if(diario[i]=='o')diario[i]='m';
		else
			if(diario[i]=='p')diario[i]='n';
		else
			if(diario[i]=='q')diario[i]='o';
		else
			if(diario[i]=='r')diario[i]='p';
		else
			if(diario[i]=='s')diario[i]='q';
		else
			if(diario[i]=='t')diario[i]='r';
		else
			if(diario[i]=='u')diario[i]='s';
		else
			if(diario[i]=='v')diario[i]='t';
		else
			if(diario[i]=='x')diario[i]='u';
		else
			if(diario[i]=='y')diario[i]='v';
		else
			if(diario[i]=='z')diario[i]='x';
		}
		fputs(diario, stdout);
	
	return 0;

}
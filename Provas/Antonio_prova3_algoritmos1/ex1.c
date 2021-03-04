#include <stdlib.h>
#include <stdio.h>


typedef char string[100];

void encripta(string str, string str_encript){
	int i;
	
	for(i=0;str[i] != '\0';i++){
		if(str[i]= 'a' || str[i]=='A')
			str_encript[i]= 'c';
		if(str[i]= 'b' || str[i]=='B')
			str_encript[i]= 'd';
		if(str[i]= 'c' || str[i]=='C')
			str_encript[i]= 'e';
		if(str[i]= 'd' || str[i]=='D')
			str_encript[i]= 'f';
		if(str[i]= 'e' || str[i]=='E')
			str_encript[i]= 'g';
		if(str[i]= 'f' || str[i]=='F')
			str_encript[i]= 'h';
		if(str[i]= 'g' || str[i]=='G')
			str_encript[i]= 'i';
		if(str[i]= 'h' || str[i]=='H')
			str_encript[i]= 'j';
		if(str[i]= 'i' || str[i]=='I')
			str_encript[i]= 'k';
		if(str[i]= 'j' || str[i]=='J')
			str_encript[i]= 'l';
		if(str[i]= 'k' || str[i]=='K')
			str_encript[i]= 'm';
		if(str[i]= 'l' || str[i]=='L')
			str_encript[i]= 'n';
		if(str[i]= 'm' || str[i]=='M')
			str_encript[i]= 'o';
		if(str[i]= 'n' || str[i]=='N')
			str_encript[i]= 'p';
		if(str[i]= 'o' || str[i]=='O')
			str_encript[i]= 'q';
		if(str[i]= 'p' || str[i]=='P')
			str_encript[i]= 'r';
		if(str[i]= 'q' || str[i]=='Q')
			str_encript[i]= 's';
		if(str[i]= 'r' || str[i]=='R')
			str_encript[i]= 't';
		if(str[i]= 's' || str[i]=='S')
			str_encript[i]= 'u';
		if(str[i]= 't' || str[i]=='T')
			str_encript[i]= 'v';
		if(str[i]= 'u' || str[i]=='U')
			str_encript[i]= 'x';
		if(str[i]= 'v' || str[i]=='V')
			str_encript[i]= 'y';
		if(str[i]= 'x' || str[i]=='X')
			str_encript[i]= 'z';
		if(str[i]= 'y' || str[i]=='Y')
			str_encript[i]= 'a';
		if(str[i]= 'z' || str[i]=='Z')
			str_encript[i]= 'b';
	}	
}

void decripta(string str_encript, string str_decript){
	int i;
	
	for(i=0;str_encript[i] != '\0';i++){
		if(str_encript[i]= 'a')
			str_decript[i]= 'y';
		if(str_encript[i]= 'b')
			str_decript[i]= 'z';
		if(str_encript[i]= 'c')
			str_decript[i]= 'a';
		if(str_encript[i]= 'd')
			str_decript[i]= 'b';
		if(str_encript[i]= 'e')
			str_decript[i]= 'c';
		if(str_encript[i]= 'f')
			str_decript[i]= 'd';
		if(str_encript[i]= 'g')
			str_decript[i]= 'e';
		if(str_encript[i]= 'h')
			str_decript[i]= 'f';
		if(str_encript[i]= 'i')
			str_decript[i]= 'g';
		if(str_encript[i]= 'j')
			str_decript[i]= 'h';
		if(str_encript[i]= 'k')
			str_decript[i]= 'i';
		if(str_encript[i]= 'l')
			str_decript[i]= 'j';
		if(str_encript[i]= 'm')
			str_decript[i]= 'k';
		if(str_encript[i]= 'n')
			str_decript[i]= 'l';
		if(str_encript[i]= 'o')
			str_decript[i]= 'm';
		if(str_encript[i]= 'p')
			str_decript[i]= 'n';
		if(str_encript[i]= 'q')
			str_decript[i]= 'o';
		if(str_encript[i]= 'r')
			str_decript[i]= 'p';
		if(str_encript[i]= 's')
			str_decript[i]= 'q';
		if(str_encript[i]= 't')
			str_decript[i]= 'r';
		if(str_encript[i]= 'u')
			str_decript[i]= 's';
		if(str_encript[i]= 'v')
			str_decript[i]= 't';
		if(str_encript[i]= 'x')
			str_decript[i]= 'u';
		if(str_encript[i]= 'y')
			str_decript[i]= 'v';
		if(str_encript[i]= 'z')
			str_decript[i]= 'x';
	}	
}


int main(int argc, char const *argv[]){
	
	string str, str_encript, str_decript;
	int desloc = 2;
	printf("Digite o texto a ser codificado\n");
	fgets(str, 100, stdin);
	setbuf(stdin,(NULL));
	
	encripta(str, str_encript);
	fputs(str_encript,stdout);
	
	decripta(str_encript, str_decript);
	fputs(str_decript, stdout);
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int
println( long* v, int size )
{
  int i;

  for ( i = 0; i < size; ++i )
    printf( "%ld ", *( v + i ) );

  putchar('\n');
}

int main(){
	long int coef[31];
	int i, j, altura;
	
	printf("Digite altura do triangulo ");
	scanf( "%d", &altura );

	coef[0] = 1;
	for ( i = 0; i < altura; ++i ){
		coef[i + 1] = 0;

		println( coef, i + 1 );

		for ( j = i + 1; j > 0; --j ){
			coef[j] += coef[j-1];
		}
	}

  return 0;
}
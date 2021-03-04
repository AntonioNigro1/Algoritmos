#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

	int i, j, x, min, ln, cn, div;

	printf("Informe a quantidade de alunos ");
	scanf("%d", &ln);

	printf("Informe a quandidade de problemas ");
	scanf("%d", &cn);
	
	int NOTA[ln][cn];
	int PESO[cn];
	float CLASSIF[ln], m;
	for (i = 0; i<ln; i++) {
		for (j = 0; j<cn; j++) {
			printf("Informe a nota numero %i do estudando %i ", j + 1, i + 1);
			scanf("%i", &NOTA[i][j]);
		}
	} 

	for (i = 0; i<cn; i++) {
		printf("Informe o peso da nota numero %i ", i + 1);
		scanf("%i", &PESO[i]);
	}
	
	div=0;
	for(i=0; i<cn-1; i++){
				div = div + PESO[i] * PESO[i+1]
	}


	for (i = 0; i<ln; i++) {
		m = 0;
		for (j = 0; j<cn; j++) {
			m = m + (NOTA[i][j] * PESO[j]) / div;
			CLASSIF[i] = m;
		}
	}

	for (i = 0; i<ln; i++) {
		printf(" O %i estudante obteve media %.2f\n", i + 1, CLASSIF[i]);
	}

	for(i=0; i<ln; i++){
			min = i;
			
		for(j=i+1; j<ln+1; j++){
			if(CLASSIF[j] >CLASSIF[min])
				min = j;
			}
			if(i!= min){
				x = CLASSIF[i];
				CLASSIF[i] = CLASSIF[min];
				CLASSIF[min] = x;
				}
		}
		
	for (i = 0; i<ln; i++){
		printf(" O estudante com media %.1f ficou em %i lugar\n ",CLASSIF[i], i+1);
	}


	return 0;
}
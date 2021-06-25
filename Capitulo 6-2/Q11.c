#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz[5][5];
	int i, j, somaElem=0;
	
	/*Só precisa pegar todos os elementos 
	onde a coluna é maior que a linha*/
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++)  {
			printf("Informe um valor para linha %d e coluna %d: ", i, j);
	        scanf("%d", &matriz[i][j]);
			if(j > i) {
				somaElem += matriz[i][j];
			}
		} 
	}
	
	printf("\n\nA soma dos elementos acima da diagonal principal e %d\n\n", somaElem);

	return 0;
}

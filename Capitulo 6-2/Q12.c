#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz[5][5];
	int i, j, somaElem=0;
	
	/*Só precisa pegar todos os elementos 
	onde a linha é maior que a coluna*/
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++)  {
			printf("Informe um valor para linha %d e coluna %d: ", i, j);
	        scanf("%d", &matriz[i][j]);
			if(i > j) {
				somaElem += matriz[i][j];
			}
		} 
	}
	
	printf("\n\nA soma dos elementos abaixo da diagonal principal e %d\n\n", somaElem);

	return 0;
}

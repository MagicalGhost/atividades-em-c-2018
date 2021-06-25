#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[6][6];
	int i, j, somaElem=0, somaGeral=0;
	
	//diagonal secundaria a linha mais a coluna precisam ser iguais a 2;
	//diagonal principal a linha tem que ser igual a coluna;
	
	for(i=0; i<6; i++) {
		for(j=0; j<6; j++)  {
			printf("Informe um valor para linha %d e coluna %d: ", i, j);
	        scanf("%d", &matriz[i][j]);
	        somaGeral += matriz[i][j];
			if(i == j && i+j==2) {
				somaElem += matriz[i][j];
			}
		} 
	}
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			printf("[ %d ] ", matriz[i][j]);
	    }
	    printf("\n");
	}
	
	somaGeral = somaGeral - somaElem;
	
	printf("\n\nA soma dos elementos que nao pertencem a diagonal principal nem a diagonal secundaria e %d\n\n", somaGeral);

	return 0;
}

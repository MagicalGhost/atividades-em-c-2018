#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[5][5], matriz_b[5][5];
	int i, j, somaGeral=0;
	
	//diagonal secundaria a linha + coluna precisam ser iguais a 2;
	//diagonal principal a linha tem que ser igual a coluna;
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++)  {
			printf("Informe um valor para linha %d e coluna %d: ", i, j);
	        scanf("%d", &matriz[i][j]);
	        matriz_b[i][j] = (matriz[i][j]*matriz[i][j]);
		} 
	}
	
	printf("\n");
	printf("B = A*A");
	printf("\n\n");
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("[ %d ] ", matriz_b[i][j]);
	    }
	    printf("\n");
	}
	

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	//logica parece ser correta,
	// mas resultado diferente do real;
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[5][5];
	int i, j, somaDiag=0, somaGeral=0;
	
	//diagonal secundaria a linha + coluna precisam ser iguais a 2;
	//diagonal principal a linha tem que ser igual a coluna;
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++)  {
			printf("Informe um valor para linha %d e coluna %d: ", i, j);
	        scanf("%d", &matriz[i][j]);
	        somaGeral += matriz[i][j];
			if(i == j || i+j==2) {
				somaDiag += matriz[i][j];
			}
		} 
	}
	
	printf("\n");
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("[ %d ] ", matriz[i][j]);
	    }
	    printf("\n");
	}
	
	somaGeral = somaGeral - somaDiag;
	
	printf("\n\nA soma das diagonais prinpal e secundaria é: %d", somaDiag);
	printf("\n\nA soma dos elementos que nao pertencem a diagonal principal nem a diagonal secundaria é: %d\n\n", somaGeral);
	printf("A diferença entre ele é: %d\n\n\a", somaGeral);

	return 0;
}

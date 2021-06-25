#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	/*
	  0 1 2 
	0 1 0 0 
	1 0 1 0 
	2 0 0 1 
	*/
	
	setlocale(LC_ALL, "Portuguese");

	int a[3][3], l, cl;
	int coluna1, coluna2, coluna3;
	
	for(l = 0; l < 3; l++){
		for(cl = 0; cl < 3; cl++){
			printf("Informe o valor da linha[%d], coluna[%d]: ", l, cl);
			scanf("%d", &a[l][cl]); 
	    }
	}
	
	printf("\n");
	
	for(l = 0; l < 3; l++){
		for(cl = 0; cl < 3; cl++){
			printf("[%d] ", a[l][cl]);
	    }
	    printf("\n");
	}
	
	coluna1 = a[0][0] + a[1][0] + a[2][0];
	coluna2 = a[0][1] + a[1][1] + a[2][1];
	coluna3 = a[0][2] + a[1][2] + a[2][2];
	
	printf("\nVetor gerado: vetor[%d, %d, %d]\n", coluna1, coluna2, coluna3);
	
	return 0;	
}

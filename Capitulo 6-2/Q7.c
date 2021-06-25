#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	/*
	  0 1 2 
	0 0 0 1
	1 0 1 0 
	2 1 0 0 
	*/
	
	setlocale(LC_ALL, "Portuguese");

	int a[3][3], l, cl, soma=0;
	
	for(l = 0; l < 3; l++){
		for(cl = 0; cl < 3; cl++){
			printf("Informe o valor da linha[%d], coluna[%d]: ", l, cl);
			scanf("%d", &a[l][cl]);
			if(l+cl==2) { //diagonal secundaria;
				soma = soma + a[l][cl];
			} 
	    }
	}
	
	printf("\n");
	
	for(l = 0; l < 3; l++){
		for(cl = 0; cl < 3; cl++){
			printf("[%d] ", a[l][cl]);
	    }
	    printf("\n");
	}
	
	printf("\nSoma da diagonal secundaria: %d", soma);
	
	return 0;	
}

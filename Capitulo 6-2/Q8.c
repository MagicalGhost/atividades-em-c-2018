#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	/*
	  0 1 2 3 4 5
	0 0 0 0 0 0 1
	1 0 0 0 0 1 0
	2 0 0 0 1 0 0
	3 0 0 1 0 0 0
	4 0 1 0 0 0 0 
	5 1 0 0 0 0 0
	*/
	
	setlocale(LC_ALL, "Portuguese");

	int a[10][10], l, cl;
	
	for(l = 0; l < 10; l++){
		for(cl = 0; cl < 10; cl++){
			printf("Informe o valor da linha[%d], coluna[%d]: ", l, cl);
			scanf("%d", &a[l][cl]);
			if(l < cl) {
				a[l][cl] = (2*l)+(7*cl);
			} else if(l == cl) {
				a[l][cl] = (3*(l*l))-1;
			} else if(l > cl) {
				a[l][cl] = (4*(l*l*l))+(5*(cl*cl))+1;
			}
	    }
	}
	
	printf("\n");
	
	for(l = 0; l < 10; l++){
		for(cl = 0; cl < 10; cl++){
			printf("[ %d ] ", a[l][cl]);
	    }
	    printf("\n");
	}
	
	printf("\n");
	
	return 0;	
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	/*
	  0 1 2 3 4 5
	0 1 0 0 0 0 0
	1 0 1 0 0 0 0
	2 0 0 1 0 0 0
	3 0 0 0 1 0 0
	4 0 0 0 0 1 0
	5 0 0 0 0 0 1
	*/
	
	setlocale(LC_ALL, "Portuguese");

	int a[5][5], l, cl;
	
	for(l = 0; l < 5; l++){
		for(cl = 0; cl < 5; cl++){
			if(l == cl) {
				a[l][cl] = 1;
			} else {
				a[l][cl] = 0;
			}
	    }
	}
	
	for(l = 0; l < 5; l++){
		for(cl = 0; cl < 5; cl++){
			printf("[%d] ", a[l][cl]);
	    }
	    printf("\n");
	}
	
	return 0;	
}

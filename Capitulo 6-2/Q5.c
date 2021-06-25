#include<stdio.h>
#include<conio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a[4][4], l, c, v=0;
	  
	for(l = 0; l < 4; l++){
	    for(c = 0; c <4; c++){
	        printf("informe um valor para linha %d e coluna %d: ", l, c);
	        scanf("%d", &a[l][c]);
	    }
	}
	
	for(l = 0; l < 4; l++){
	    for(c = 0; c <4; c++){
	        if(a[l][c] < 0) {
	            v += 1;
	        }
	    }
	}
	
  	printf("\nForam digitados %d numeros negativos!\n", v);
	return 0;
}

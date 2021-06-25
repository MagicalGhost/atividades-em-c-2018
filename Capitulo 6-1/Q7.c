#include<stdio.h>
#include<conio.h>

int main() {
	
	int x[10], i, menor, maior;
	
    for (i = 0; i < 10; i++) {
	    printf("informe um valor: ");
	    scanf("%d", &x[i]);
    }
    
    menor = x[0];
    maior = x[0];
    
    for (i = 0; i < 10; i++){
	    if(menor > x[i]){
	    	menor = x[i];
	    }
	    if(maior < x[i]){
	        maior = x[i];
	    }
   }
    printf("\no menor numero digitado foi: %d\n", menor);
    printf("o maior numero digitado foi: %d\n", maior);
    
	return 0;
}

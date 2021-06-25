#include<stdio.h>
#include<conio.h>
int main() {
	
    int vetor[8], i, x, y;
  
	for (i = 0; i < 8; i++){
	    printf("informe um valor: ");
	    scanf("%d", &vetor[i]);
    }
    
	printf("informe um valor de 0 a 7: ");
	scanf("%d", &x);
	  
	printf("informe outro valor de 0 a 7: ");
	scanf("%d", &y);
  
    if(x > 8 && x < 0 && y > 8 && y < 0){
    	printf("so vale valor de 0 a 7");
    }
    else{
	    printf("%d\n", vetor[x]);
	    printf("%d\n", vetor[y]);
	    printf("Soma: %d", vetor[x]+vetor[y]);
    }
    return 0;
}

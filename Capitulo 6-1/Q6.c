#include<stdio.h>
#include<conio.h>

int main() {
	
	int vetor[10], i, x, y;
  
    y = 0;
    
    for (i = 0; i < 10; i++){
	    printf("informe um valor: ");
	    scanf("%d", &vetor[i]);
    }
	for(i = 0; i < 10; i++){
	    x = vetor[i]%2;
		if(x == 0){
	        y++;
	    }
	}
    printf("voce digitou %d numeros pares", y);
    return 0;
}

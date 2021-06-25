#include <stdio.h>
#include <stdlib.h>

int main() {

	float vetor[10];
	int i, x;

	for(i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%f", &vetor[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		for(x=i+1; x < 10; x++) {
			if(vetor[i] == vetor[x]) {
				printf("O valor %.1f se repete\n", vetor[i]);
				printf("%.1f = %.1f\n", vetor[i], vetor[x]);
			} 
		}
	}
	
	return 0;
}

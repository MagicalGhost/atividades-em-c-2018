#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float x[10], temp;
	int i, j;
	
	for (i = 0; i<10; i++) {
	printf("Digite um numero: ");
	scanf("%f",&x[i]);
	}
	
	for (i=0; i<10; i++) {
		for(j=i+1; j<10; j++) {
			if(x[i] > x[j]) {
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
			}
		}
	}
	printf("\n");
	/* Impressão do Vetor Ordenado */
	printf("Vetor em ordem crescente: \n");
	for(i=0; i<10; i++) {
		printf("%.2f\n", x[i]); 
	}
	
	system("pause");
	return 0;
}

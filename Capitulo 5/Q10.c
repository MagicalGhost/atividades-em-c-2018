#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, soma=0; 
	
	for (i=1; i<=10; i++) { 
		printf("Informe o %d� n�mero: ", i); 
		scanf("%d", &num); 
		while (num <= 0) { 
			printf("N�mero precisa ser positivo. Reenforme o %d� n�mero: ", i); 
			scanf("%d", &num); 
		} 
		soma += num; 
	} 
	printf("\nM�dia: %.2f\n", soma/10.0); 
	return 0; 
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double num;
	
	printf("Informe um numero: ");
	scanf("%f", &num);
	
	printf("Valor: %.2e", num);
	
	return 0;
}

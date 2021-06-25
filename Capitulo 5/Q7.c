#include <stdio.h> 
#include <locale.h>

int main() { 

	int cont, num1, soma;
	
	printf("Informe um numero: ");
	scanf("%d", &num1);	
	soma = num1;
	
	for(cont=9; cont>0; cont--) { 
		printf("Informe um numero: ");
		scanf("%d", &num1);
		soma = soma + num1;
	} 
	
	printf("\nSoma final: %d\n", soma); 
	return 0; 
}

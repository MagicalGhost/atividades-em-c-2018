#include <stdio.h> 
#include <locale.h>

int main() { 

	int cont, num1, media;
	
	printf("Informe um numero: ");
	scanf("%d", &num1);	
	media = num1;
	
	for(cont=9; cont>0; cont--) { 
		printf("Informe um numero: ");
		scanf("%d", &num1);
		media = media + num1;
	} 
	
	printf("\nMedia final: %.1f\n", media/10.0); 
	return 0; 
}

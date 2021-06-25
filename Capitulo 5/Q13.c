#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");	
	
	int num, soma=0; 
	
	for(num=1; num<=1000; num++) { 
		if ((num % 3 == 0) || (num % 5 == 0)) {
			soma += num; 
		}
	} 
	printf("A soma de todos os números naturais abaixo de 1.000\nque são múltiplos de 3 ou 5 é: %d\n", soma); 
	return 0; 
}


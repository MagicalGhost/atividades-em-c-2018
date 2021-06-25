#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10000];
	int x, n, maior, quantidade;
	
	printf("Informe a quantidade de números: ");
	scanf("%d", &n); 
	
	for (x=0; x < n; x++) {
		printf("Informe um número: ");
	    scanf("%d", &vetor[x]); // guarda os números no vetor;
	}
	
	maior = vetor[0];
	
	for (x=0; x < n; x++) {
	    if (vetor[x] > maior) {
			maior = vetor[x]; // pega o maior numero do vetor;
		}
	}
	
	quantidade = 0;
	
	for (x=0; x < n; x++) {
	    if (vetor[x] == maior){
	    	quantidade++;
		} 
	}
	
	printf("\nMaior: %d\nQuantidade: %d\n\n", maior, quantidade);
	
	system("pause");
	return 0;
}

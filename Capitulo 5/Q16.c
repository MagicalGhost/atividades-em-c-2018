#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    
	int i, auxiliar=1;
	float soma=0.0;
	
	while(auxiliar) {
		printf("Digite um n�mero qualquer ou 0 para terminar: ");
		scanf("%d", &auxiliar);
		printf("\nUsu�rio digitou %d \n", auxiliar);
		soma=0.0;
		if (auxiliar) {
			for (i=1; i<=auxiliar; i++) {
			soma += (1.0/i);
		}
			printf("O resultado da s�rie � %f \n\n", soma);
		}
		else {
			printf("Entrada terminada pelo usu�rio! \n");
		}
	}

}

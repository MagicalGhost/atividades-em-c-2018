#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float valor;
	int estado;
	
	printf("Informe o valor do produto: R$");
	scanf("%f", &valor);
	
	printf("\nQual estado:\n");
	printf("1-MG;\n2-SP;\n3-RJ;\n4-MS;\n");
	scanf("%d", &estado);
	
	switch(estado) {
		case 1:
			printf("Preco final: R$%.2f\n", valor+((valor*7.0)/100.0));
			break;
		case 2:
			printf("Preco final: R$%.2f\n", valor+((valor*12.0)/100.0));
			break;
		case 3:
			printf("Preco final: R$%.2f\n", valor+((valor*15.0)/100.0));
			break;
		case 4:
			printf("Preco final: R$%.2f\n", valor+((valor*8.0)/100.0));
			break;
		default:
			printf("ERROR!\n");
	}
	
}

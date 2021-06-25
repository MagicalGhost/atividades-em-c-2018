#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dia, mes, ano;
	
	printf("Informe o dia: ");
	scanf("%d", &dia);
	
	printf("Informe o mes: ");
	scanf("%d", &mes);
	
	printf("Informe o ano: ");
	scanf("%d", &ano);
	
	printf("%d/%d/%d", dia, mes, ano);
	
	return 0;
}

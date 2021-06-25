#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float h;
	int sexo;
	
	printf("Informe sua altura: ");
	scanf("%f", &h);
	
	printf("Qual seu sexo:\n");
	printf("1-Homem;\n2-Mulher;\n");
	scanf("%d", &sexo);
	getchar();
	
	if(sexo == 1) {
		printf("Peso ideal: %.2fKg\n", (72.7*h)-58.0);
	}
	if(sexo == 2) {
		printf("Peso ideal: %.2fKg\n", (62.1*h)-44.7);
	}
	if((sexo != 1) && (sexo != 2)) {
		printf("Valor Invalido!\n");
	}
	
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	float num1, num2;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um número: ");
	scanf("%f", &num1);
	
	printf("Informe outro número: ");
	scanf("%f", &num2);
	
	if(num1 > num2) {
		printf("%.1f é maior que %.1f!\n", num1, num2);
	} 
	if (num1 < num2) {
		printf("%.1f é menor que %.1f!\n", num1, num2);
	}
	else {
		printf("Valores iguais!\n");
	}
		
	system("pause");
	return 0;
}

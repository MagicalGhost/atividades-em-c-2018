#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float celsius;
	
	printf("Informe a temperatura em graus Celsius: ");
	scanf("%f", &celsius);
	
	printf("Essa temperatura em Fahrenheit e: %.2f\n", ((celsius*(9.0/5.0)+32.0)));
	
	system("pause");
	return 0;
}

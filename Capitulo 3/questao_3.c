#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num, num1, num2;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &num1);
	
	printf("Informe o terceiro numero: ");
	scanf("%d", &num2);
	
	printf("\nA soma entre %d + %d + %d é %d\n", num, num1, num2, num+num1+num2);
	
	system("pause");
	return 0;
}

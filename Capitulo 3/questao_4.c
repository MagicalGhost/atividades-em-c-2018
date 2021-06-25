#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float num1, num2, num3, num4, media;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo valor: ");
	scanf("%f", &num2);
	
	printf("Informe o terceiro valor: ");
	scanf("%f", &num3);
	
	printf("Informe o quarto valor: ");
	scanf("%f", &num4);
	
	media = (num1+num2+num3+num4)/4.0;
	
	printf("A media aritmetica entre %.2f + %.2f + %.2f + %.2f e %.2f\n", num1, num2, num3, num4, media);
	
	system("pause");
	return 0;
}

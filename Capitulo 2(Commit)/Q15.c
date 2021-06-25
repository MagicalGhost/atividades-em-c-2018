#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char carac;
	int num1;
	float num2;
	
	printf("Informe uma letra: ");
	scanf("%c", &carac);
	
	printf("Informe um numero: ");
	scanf("%d", &num1);
	
	printf("Informe um numero: ");
	scanf("%f", &num2);
	
	printf("%c %d %.2f\n%c	%d		%.2f\n%c\n%d\n%.2f\n", carac, num1, num2, carac, num1, num2, carac, num1, num2);
	
	return 0;
}

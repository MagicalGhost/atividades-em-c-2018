#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	int num;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	if((num%2)==0) {
		printf("Quadrado: %d\n", num*num);
		printf("Raiz quadrada: %f\n", sqrt(num));
	}
	
	system("pause");
	return 0;
}

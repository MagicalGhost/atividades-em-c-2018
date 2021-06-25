#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, fibo=0, a=0, b=1;
	
	do {
		printf("Informe um número maior ou igual a zero: ");
		scanf("%d", &num);
	} while(num<0);
	
	printf("Série de Fibonacci: ");
  	printf("%d ", a);
	
	for(i=0; i<(num-1); i++) {
		fibo = a + b;
		a = b;
		b = fibo;
		printf("%d ", fibo);
	}

	return 0;	
}

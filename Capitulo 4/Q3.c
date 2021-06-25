#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int num;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	if((num%2)==0) {
		printf("Número Par!\n");
	}
	else {
		printf("Número Ímpar!\n");
	}
	
	system("pause");
	return 0;
}

#include <stdio.h>
#include <locale.h> 

int main() {
	
	int num1;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe um número: ");
	scanf("%d", &num1);
	
	printf("Antecessor: %d\n", num1-1);
	printf("Sucessor: %d\n", num1+1);
	
	system("pause");
	return 0;
}

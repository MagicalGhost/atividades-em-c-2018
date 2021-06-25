#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Informe um número: ");
	scanf("%f", &num);
	
	printf("A quinta parte de %.2f é %.2f\n", num, (num/5.0));
	
	system("pause");
	return 0;
}

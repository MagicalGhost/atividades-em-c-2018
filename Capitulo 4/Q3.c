#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int num;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	if((num%2)==0) {
		printf("N�mero Par!\n");
	}
	else {
		printf("N�mero �mpar!\n");
	}
	
	system("pause");
	return 0;
}

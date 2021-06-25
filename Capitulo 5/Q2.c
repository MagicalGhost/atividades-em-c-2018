#include <stdlib.h>
#include <locale.h>

int main() {
	
	int num, cont=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um número positivo: ");
	scanf("%d", &num);
	
	printf("%d\n", num);
	if(num >= 0) {
		while(cont < num) {
			num -= 1;
			printf("%d\n", num);
		}
	}
	else {
		printf("Valor Incorreto!\n");
	}
		
	system("pause");
	return 0;
}

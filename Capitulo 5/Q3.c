#include <stdlib.h>
#include <locale.h>

int main() {
	
	int num, troca, cont;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	printf("=================\n");
	num *= 2;
	
	for(cont = 0; cont < num; cont++) {
		if(cont%2 != 0){
			printf("%d\n", cont);
		}
	}	
	system("pause");
	return 0;
}

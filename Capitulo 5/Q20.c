#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float soma=1.0, termo=1.0, i, n=-1.0;
	
	while(n<0) {
		printf("Informe um número inteiro e positivo: ");
		scanf("%f", &n);
	}
	
	for(i=1.0; i<n; i++) {
		termo /= i;
		soma += termo;
	}
	
	printf("%f\n", soma);
	
	system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a[6], soma, i;

	a[0] = 1;
    a[1] = 0;
	a[2] = 5;
	a[3] = -2;
	a[4] = -5;
	a[5] = 7;

	printf("a) Numeros atribuidos ao array: \n");
	for(i = 0; i < 6; i++){
        printf("%d\n", a[i]);
	}
	soma = a[0] + a[1] + a[5];
	printf("\nb) Soma dos valores pedidos(a[0]+a[1]+a[5]):\n%d\n", soma);
	a[4] = 100;
	printf("\nc) O valor do array a[4] agora e:\n%d\n", a[4]);
	printf("\nd) Os valores do array agora sao: \n");
	for(i = 0; i < 6; i++){
        printf("%d\n", a[i]);
	}
	return 0;
}

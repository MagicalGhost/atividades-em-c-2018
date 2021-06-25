#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int i;
	float a[20], b[20], x;

	for(i = 0; i < 20; i++){
        printf("Informe um valor: ");
        scanf("%f", &a[i]);
	}
	printf("\n");
	for(i = 0; i < 20; i++){
        x = pow(a[i], 2);
        b[i] = x;
        printf("Quadrado de %.1f = %.1f\n", a[i], b[i]);
	}
	return 0;
}

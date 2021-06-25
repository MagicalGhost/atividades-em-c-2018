#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float n1, n2;
	
	printf("Informe dois valores seguidos: ");
	scanf("%f\n%f", &n1, &n2);
	
	printf("%.2f e %.2f\n", n2, n1); 
	
	return 0;
}

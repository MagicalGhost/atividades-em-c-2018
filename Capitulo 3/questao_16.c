#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num, mult, div;
	
	printf("Informe um valor: ");
	scanf("%d", &num);
	
	mult = (num << 1);
	div = (num >> 1);
	
	printf("Multiplicao por 2: %d\n", mult);
	printf("Divisao por 2: %d\n", div);
	
	return 0;
}

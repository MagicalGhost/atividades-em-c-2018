#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	int num, divisor=2, ehprimo=1; 
	
	/* ehprimo = 1 se o número dado é primo */
	/* ehprimo = 0 se o número dado não é primo */
	
	printf("Informe um numero: "); 
	scanf("%d", &num); //entrada do número;
	 
	if (num <= 1) {
		ehprimo = 0;	
	}

    while ((ehprimo == 1) && (divisor <= (num / 2))) {
		if (num % divisor == 0) {
			ehprimo = 0;
			divisor += 1;
		}
    }

    if (ehprimo == 1) {
    	printf("%d e primo! \n", num);
	} else {
		printf(" %d nao e primo! \n", num);
	} 
	
	system("pause");
    return 0;
}

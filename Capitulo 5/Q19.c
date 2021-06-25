#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float S = 1.0, numerador=1.0, denominador=1.0;
	
	while(denominador<3.0) {
		numerador += 2.0;
		denominador += 1.0;
		S = S + (numerador/denominador);
	}
	
	printf("%.2f\n", S);
	
	system("pause");
    return 0;
}

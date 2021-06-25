#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float x, y, decisao, expoente;

	printf("\n[0]-sair do programa\n[1]-soma\n[2]-subtracao\n[3]-multiplicacao\n[4]-divisao\n[5]-raiz\n[6]-potencia\n\n");
	printf("\nDigite sua escolha: ");
	scanf("%f", &decisao);

	if (decisao == 1.0) {
		printf("\nDigite um numero: ");
		scanf("%f", &x);
			
		printf("Digite outro numero: ");
		scanf("%f", &y);
			
		printf("\nA soma e: %g\n", x + y);
	}
	else if (decisao == 2.0) {
		printf("\nDigite um numero: ");
		scanf("%f", &x);
			
		printf("Digite outro numero: ");
		scanf("%f", &y);
			
		printf("A subtracao e: %g\n", x - y);
	}
	else if (decisao == 3.0) {
		printf("\ndigite um numero: ");
		scanf("%f", &x);
			
		printf("digite outro numero: ");
		scanf("%f", &y);
			
		printf("A multiplicacao e: %g\n", x * y);
	}
	else if (decisao == 4.0) {
		printf("\nDigite um numero: ");
		scanf("%f", &x);
			
		printf("Digite outro numero: ");
		scanf("%f", &y);
			
		printf("A divisao e: %f\n", x / y);
	}
	else if (decisao == 5.0) {
		printf("\nDigite um numero: ");
		scanf("%f", &x);
			
		printf("Digite outro numero: ");
		scanf("%f", &y);
			
		printf("A raiz de %g e %f\n", x, sqrt(x));
		printf("A raiz de %g e %f\n", y, sqrt(y));
	}
	else if (decisao == 6.0) {
		printf("\nDigite um numero: ");
		scanf("%f", &x);
			
		printf("Digite outro numero: ");
		scanf("%f", &y);
			
		printf("\nescolha o expoente: ");
		scanf("%f", &expoente);
			
		printf("%g elevado a %g e: %g \n", x, expoente, pow(x, expoente));
		printf("%g elevado a %g e: %g \n\n ", y, expoente, pow(y, expoente));
	}
		
	return 0;
}

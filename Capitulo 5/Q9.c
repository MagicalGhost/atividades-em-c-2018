#include <stdio.h>
#include <stdlib.h>

int main() {
	
    float num, maior = 0.0, menor = 0.0, y;

    printf("Digite um numero: ");
    scanf("%f",&num);

    menor = num;
    maior = num;

    for( y = 1.0; y < 10.0; y++ ) {

    printf("Digite um numero: ");
    scanf("%f",&num);

	if(num > maior) maior = num;
	if(num < menor) menor = num;

  	}

    printf ("Menor: %.1f\nMaior: %.1f\n", menor, maior);
        return 0;
}

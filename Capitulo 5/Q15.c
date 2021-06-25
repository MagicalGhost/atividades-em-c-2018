#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int num, maior = 0, menor = 0, y;

    printf("Digite um numero: ");
    scanf("%d",&num);

    menor = num;
    maior = num;

    while(num>=0) {

	if(num > maior) maior = num;
	if(num < menor) menor = num;
	
	printf("Digite um numero: ");
    scanf("%d",&num);
  	}

    printf ("\nMenor: %.1d\nMaior: %.1d\n", menor, maior);
    return 0;
}


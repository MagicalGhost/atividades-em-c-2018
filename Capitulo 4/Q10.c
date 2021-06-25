#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, dig;
	
	do{
		printf("Informe um número positivo: ");
		scanf("%d", &num1);
	}while(num1<=0);
	
	do{
		printf("\nInforme um outro positivo: ");
		scanf("%d", &num2);
	}while(num2<=0);
	
	do{
		printf("\nInforme o ultimo positivo: ");
		scanf("%d", &num3);
	}while(num3<=0);
	
	if((num1 >= 0) && (num2 >= 0) && (num3 >= 0)) {
		printf("1-Geometrica\n2-Ponderada\n3-Harmônica\n4-Aritmetica\n");
		printf("\nQual tipo de média: ");
		scanf("%d", &dig);
		
		switch(dig) {
			case 1:
				printf("Média: %d\n", num1*num2*num3);
				break;
			case 2:
				printf("Média: %d\n", ((num1+2)*(num2+3)*num3)/6);
				break;
			case 3:
				printf("Média: %d\n", 1/((1/num1)+(1/num2)+(1/num3)));
				break;
			case 4:
				printf("Média: %d\n", (num1+num2+num3)/3);
				break;
			default:
				printf("Valor Invalido!\n");
		}
	}
	else {
		printf("Apenas valores positivos!\n");
	}
}

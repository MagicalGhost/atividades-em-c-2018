#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float pi = 3.141592;
    float h, r, v, r2;
    
    do{
    	printf("\nInforme a altura do cilindro: ");
    	scanf("%f", &h);
    	if(h<0) {
    		printf("Apenas numeros positivos!!\n");
		}
	}while(h<0);
    
    do{
    	printf("\nInforme o raio do cilindro: ");
    	scanf("%f", &r);
    	if(r<0) {
    		printf("Apenas numeros positivos!!\n");
		}
	}while(r<0);
    
    r2 = pow(r, 2);
    v = pi * r2 * h;
    
    printf("\nO volume do cilindro e: %.2f", v);
    return 0;
}

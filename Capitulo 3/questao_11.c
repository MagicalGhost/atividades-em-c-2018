#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float pi = 3.141592;
    float r, a, r2;
    
    do{
    	printf("\nInforme o raio do circulo: ");
    	scanf("%f", &r);
    	if(r<0){
			printf("Apenas numero positivo!!\n");
		}
	}while(r<0);
    
    r2 = pow(r, 2);
    a = pi * r2;
    
    printf("\nA area do circulo e: %.2f", a);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, p;
    
    	do{
    		printf("informe o valor da altura: ");
			scanf("%f", &h);
		}while(h<=0);
		
		do{
			printf("informe o valor do peso: ");
			scanf("%f", &p);
		}while(p<=0);
		
		if ( h < 1.20 && p <= 60.0 ){
			printf("classificação: A");
		}
		if ( h >= 1.20 && h <= 1.70 && p <= 60.0){
			printf("classificação: B");
		}
		if ( h > 1.70 && p <= 60.0 ){
			printf("classificação: C");
		}
		if ( h < 1.20 && p > 60.0 && p <= 90.0 ){
			printf("classificação: D");
		}
		if ( h >= 1.20 && h <= 1.70 && p > 60.0 && p <= 90.0 ){
			printf("classificação: E");
		}
		if ( h > 1.70 && p > 60.0 && p <= 90.0 ){
			printf("classificação: F");
		}
		if ( h < 1.20 && p > 90.0 ){
			printf("classificação: G");
		}
		if ( h >= 1.20 && h <= 1.70 && p > 90.0 ){
			printf("classificação: H");
		}
		if ( h > 1.70 && p > 90.0 ){
			printf("classificação: I");
		}
    return 0;
}

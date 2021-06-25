#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float reais, cotacao;
    
    do{
    	printf("Informe o valor em reais: R$");
    	scanf("%f", &reais);
    	if(reais<0) {
			printf("Apenas numero positivo!!\n");
		}
	}while(reais<0);
    
    do{
    	printf("Informe a cotacao do dolar: ");
    	scanf("%f", &cotacao);
    	if(cotacao<=0) {
			printf("Apenas numero positivo!!\n");
		}
	}while(cotacao<=0);
    
    printf("\n\aValor em dolar: %.2f US$", reais/cotacao);
    
    return 0;
}

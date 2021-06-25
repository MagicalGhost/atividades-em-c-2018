#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//foi a que eu fiquei bugado;
	//pois não sei porque sempre chega naquele resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
    float m, media, sigma, p;
    int vetor[10], i;
    
    media = 0;
    m = 0;
    sigma = 0;
    p = 0;
    
    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    
    for(i = 0; i < 10; i++){
        m = m + vetor[i];
    }
    
    media = m / 10.0;
    
    for(i = 0; i < 10; i++){
        p = p + (vetor[i] - media);
    }
    
    sigma = sqrt((p * 1.0)/10.0);
    printf("Resultado d = %.2f\n", sigma);
    
    return 0;
}

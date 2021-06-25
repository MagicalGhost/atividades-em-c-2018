#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	//está dando erro, pois ele diz que o 
	//numero repete varias outras vezes;
	
	setlocale(LC_ALL, "Portuguese");

	int n, i, z;
	int vetor[10];
	 
	printf("Informe um valor: ");
	scanf("%d", &n);
	
	vetor[0]=n;
	
	for (i=1; i<10; i++){
		printf("Informe um valor: ");
	    scanf("%d",&n);
	    for (z=0; z<i; z++){
	        if(vetor[z]==n){
	            while(vetor[z]==n){
	            	printf("JA DIGITOU ESTE NUMERO, DIGITE NOVAMENTE: ");
	            	scanf("%d",&n);
				}
	        }
	        else {
	            vetor[i]=n;
	        }
	    }
	}
    printf("\n");
    for (i=0; i<10; i++){
        printf("Valor não repetido: %d\n", vetor[i]);
    }
	
	return 0;
}

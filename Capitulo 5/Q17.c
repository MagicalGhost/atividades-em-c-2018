#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int N;
    int linha, coluna ,numeros=0;
    
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &N); //informando o número de linhas que deverá aparecer;
    
    while(N<=0) {
    	printf("Apenas números positivos inteiros, informe novamente: ");
    	scanf("%d", &N); //informando novamente caso a entrada anterior seja negativa;
	}
	
    for(linha=1; linha<=N; linha++) { //ciclo de repetição utilizado para a quebra de linha;
    
    	for (coluna=1; coluna<=linha; coluna++) {
        	numeros++; //encrementar os numeros de cada linha;
            printf("%d ", numeros); //mostrar os numeros;
        }
        
        printf("\n"); //printf para quebra de linhas;
        // fará isso enquanto "a" for menor ou igual ao
		// número de linhas entrado anteriormente;
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}

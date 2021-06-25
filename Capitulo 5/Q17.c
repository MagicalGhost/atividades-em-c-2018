#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int N;
    int linha, coluna ,numeros=0;
    
    printf("Informe um n�mero inteiro positivo: ");
    scanf("%d", &N); //informando o n�mero de linhas que dever� aparecer;
    
    while(N<=0) {
    	printf("Apenas n�meros positivos inteiros, informe novamente: ");
    	scanf("%d", &N); //informando novamente caso a entrada anterior seja negativa;
	}
	
    for(linha=1; linha<=N; linha++) { //ciclo de repeti��o utilizado para a quebra de linha;
    
    	for (coluna=1; coluna<=linha; coluna++) {
        	numeros++; //encrementar os numeros de cada linha;
            printf("%d ", numeros); //mostrar os numeros;
        }
        
        printf("\n"); //printf para quebra de linhas;
        // far� isso enquanto "a" for menor ou igual ao
		// n�mero de linhas entrado anteriormente;
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}

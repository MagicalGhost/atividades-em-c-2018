#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");	
	
   	int valor, i, soma=0;
   
	printf("Insira um valor para verificar os seus divisores: ");
	scanf("%d", &valor);
	   
	for(i = 1; i < valor; i++) {
    	if((valor%i)==0) {
	    	soma += i;
	    }
	}
	printf("Soma dos divisores: %d\n", soma);
   	system("pause");
   	return 0;
}


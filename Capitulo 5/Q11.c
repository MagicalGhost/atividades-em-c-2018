#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");	
	
   	int valor, i;
   
	   printf("Insira um valor para verificar os seus divisores: ");
	   scanf("%d", &valor);
	   
	   for(i = 1; i <= valor; i++) {
	       if((valor%i)==0) {
	           printf("%d é divisor \n", i);
	       }
	   }
	   system("pause");
	   return 0;
}


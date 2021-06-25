#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, c;

    printf("informe o valor do numero: ");
    scanf("%d", &n);
    
    c = 0;
    
    if(n > 0){
	    while (c <= n){
	        printf("%d \n", c);
	        c += 1;
		}
    }
    else if (n < 0){
        printf("numero invalido");
    }
    else {
        printf("0");
    }
    return 0;
}

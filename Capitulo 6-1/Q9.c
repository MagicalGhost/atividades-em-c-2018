#include<stdio.h>
#include<conio.h>

int main() {
	
    int i, a[10], b[10], c[10];
    
    for (i = 0; i < 10; i++){
	    printf("informe um valor inteiro para A: ");
	    scanf("%d", &a[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++){
	    printf("informe um valor inteiro para B: ");
	    scanf("%d", &b[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++){
    	c[i] = a[i] - b[i];
    	printf("valor da subtracao %d de C: %d\n", i, c[i]);
    }
    return 0;
}

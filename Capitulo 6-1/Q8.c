#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
	float c, v, x[10];
	
	v = 0;
	c = 0;
	
	for (i = 0; i < 10; i++){
	    printf("informe um valor: ");
	    scanf("%f", &x[i]);
	}
	for (i = 0; i < 10; i++){
	    if(x[i] < 0){
	        v = v + 1;
	    }
	    if(x[i] >= 0){
	        c = c + x[i];
	    }
	}
	printf("\na quantidade de numeros negativos lidos foram: %.0f\n", v);
	printf("a soma dos numeros positivos lidos foi: %.2f\n", c);
	return 0;
}

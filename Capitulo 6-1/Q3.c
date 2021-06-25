#include<stdio.h>
#include<conio.h>

int main() {
	
	int vetor[5],i;
	float x;
	  
	for (i = 0; i < 5; i++)
	{
		printf("informe um valor: ");
	    scanf("%d", &vetor[i]);
	}
	for (i = 0; i < 5; i++)
	{
	    x += vetor[i];
    }
	printf("%f\n", x/i);
	return 0;
}

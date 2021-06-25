#include<stdio.h>
#include<conio.h>

int main() {
	
  	int vetor[6], i;
  
    for (i = 0; i < 6; i++)
  	{
    printf("informe um valor: ");
    scanf("%d", &vetor[i]);
 	}
 	printf("\n");
  	for(i = 0; i < 6; i++)
	{
    printf("%d\n", vetor[i]);
  	}
  	
    return 0;
}

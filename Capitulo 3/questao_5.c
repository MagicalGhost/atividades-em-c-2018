#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, anoatual, anonascimento;
    
    do{
    	printf("Informe sua idade: ");
    	scanf("%d", &idade);
    	if(idade<=0) {
			printf("Apenas numero positivo!!\n");
		}
	}while(idade<=0);
    
    do{
    	printf("Informe o ano atual: ");
    	scanf("%d", &anoatual);	
    	if(anoatual<=0) {
			printf("Apenas numero positivo!!\n");
		}
	}while(anoatual<=0);
    
    anonascimento = anoatual - idade;
    
    printf("O ano de nascimento e: %d\n", anonascimento);
    
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{	
    int idade;
    
    do{
    	printf("informe a idade do nadador: ");
		scanf("%d", &idade);
		if(idade<=0){
			printf("\nApenas valor positivo!!");
		}
	}while(idade<=0);

	if (idade >= 5 && idade <= 7){
        printf("o nadador e da categoria infantil A");
    }

    if (idade >= 8 && idade <= 10){
        printf("o nadador e da categoria infantil B");
    }

    if (idade >= 11 && idade <= 13){
		printf("o nadador e de categoria juvenil A");
	}

    if ( idade >= 14 && idade <= 17){
        printf("o nadador e de categoria juvenil B");
    }

    if (idade >= 18){
        printf("o nadador e de categoria adulto");
    }
    
    return 0;
}


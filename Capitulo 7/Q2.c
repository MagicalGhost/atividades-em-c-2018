#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL, "Portuguese");
	
	char nome[40];
	int cont;
	
	printf("Informe um nome: ");
	fgets(nome, 40, stdin);
	
	printf("\n");
	
	for(cont=0; cont<4; cont++)
	{
		printf("%d° letra: %c\n", cont+1, nome[cont]);
	}

	system("pause");
	return 0;	
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
	char nome[30];
	
	printf("Informe um nome: ");
	scanf("%s", &nome);
	
	printf("Em maiuscula: %s\n", strupr(nome));
	
	system("pause");
	return 0;
}

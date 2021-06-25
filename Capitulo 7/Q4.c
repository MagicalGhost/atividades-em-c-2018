#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int x, tam;
	char nome[30];
	
	printf("Digite um nome: ");
	gets(nome);
	
	tam = strlen(nome); //determina o tamanho da palavra digitada;
	
	printf("\nO nome de trás pra frente é: ");
	for (x=tam-1; x >= 0; x--)
	{
		printf("%c",nome[x]);
	}
	
	printf("\n\n");
	
	system("pause");
	return 0;	
}

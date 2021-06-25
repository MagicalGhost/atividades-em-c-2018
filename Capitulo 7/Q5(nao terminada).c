#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int x, tam, cont;
	char nome[30], interm[30];
	
	printf("Digite um nome: ");
	gets(nome);
	
	tam = strlen(nome); //determina o tamanho da palavra digitada;
	x = tam - 1;
	
	for(cont=0; cont<tam; cont++)
	{
		interm[cont] = nome[x];
		x -= 1;
		nome[cont] = interm[cont];
	}
		
	printf("\nO nome de trás pra frente é: %s", nome);
	printf("\n\n");
	
	system("pause");
	return 0;	
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
		
	setlocale(LC_ALL, "Portuguese");
	
	char nome[40];
	
	printf("Informe um nome: ");
	fgets(nome, 40, stdin);
	
	printf("Nome digitado: %s\n", nome);

	system("pause");
	return 0;	
}

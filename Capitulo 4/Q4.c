#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	float salario, prestacao;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um salario: ");
	scanf("%f", &salario);
	printf("Informe a presta��o: ");
	scanf("%f", &prestacao);
	
	if(prestacao > ((salario*20.0)/100.0)) {
		printf("Emprestimo n�o concedido! \n");
	}
	else {
		printf("Emprestimo concedido!\n");
	}
	
	system("pause");
	return 0;
}

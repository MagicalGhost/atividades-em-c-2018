#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char a, b, c;
	
	printf("Informe o primeiro caractere: ");
	scanf("%c", &a); //Aqui também precisamos usar o fflush(stdin);
	fflush(stdin);
	
	printf("Informe o segundo caractere: ");
	scanf("%c", &b); //Não está fazendo a leitura;
	fflush(stdin); //Para isso usamos o fflush(stdin);
	//a função do fflush, é para limpar o buffer do teclado, 
	//sempre que vc for receber uma variavel do tipo char, 
	//é aconselhavel usar o fflush!
	
	printf("Informe o terceiro caractere: "); 
	scanf("%c", &c); //Não está fazendo a leitura;
	fflush(stdin); //Para isso usamos o fflush(stdin);
	//a função do fflush, é para limpar o buffer do teclado, 
	//sempre que vc for receber uma variavel do tipo char, 
	//é aconselhavel usar o fflush!
	
	printf("%c\n%c\n%c\n", a, b, c);
	
	return 0;
}

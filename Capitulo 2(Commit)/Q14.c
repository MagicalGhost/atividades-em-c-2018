#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char a, b, c;
	
	printf("Informe o primeiro caractere: ");
	scanf("%c", &a); //Aqui tamb�m precisamos usar o fflush(stdin);
	fflush(stdin);
	
	printf("Informe o segundo caractere: ");
	scanf("%c", &b); //N�o est� fazendo a leitura;
	fflush(stdin); //Para isso usamos o fflush(stdin);
	//a fun��o do fflush, � para limpar o buffer do teclado, 
	//sempre que vc for receber uma variavel do tipo char, 
	//� aconselhavel usar o fflush!
	
	printf("Informe o terceiro caractere: "); 
	scanf("%c", &c); //N�o est� fazendo a leitura;
	fflush(stdin); //Para isso usamos o fflush(stdin);
	//a fun��o do fflush, � para limpar o buffer do teclado, 
	//sempre que vc for receber uma variavel do tipo char, 
	//� aconselhavel usar o fflush!
	
	printf("%c\n%c\n%c\n", a, b, c);
	
	return 0;
}

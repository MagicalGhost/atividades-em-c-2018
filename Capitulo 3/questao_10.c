#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	const float valor = 780000.00;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Valor ganho na premiação: %.2f\n\n", valor);
	
	printf("\aI- Primeiro ganhador(46%): %.2fR$\n", (valor*46)/100);
	printf("\aII- Segundo ganhador(32%): %.2fR$\n", (valor*32)/100);
	printf("\aIII- Terceiro ganhador(22%): %.2fR$\n", (valor*22)/100);
	
	system("pause");
	return 0;
}

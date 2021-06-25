#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int mult[100], i;
	
	for(i=1; i<= 100; i++) {
		mult[i] = i;
		if((mult[i] % 7) == 0) {
			i = i;
			printf("\n%d é multiplo de 7\n\n", mult[i]);
		} else {
			printf("%d não é multiplo de 7\n", mult[i]);
		}
	}
	return 0;
}

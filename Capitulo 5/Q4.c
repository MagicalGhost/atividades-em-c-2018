#include <stdlib.h>
#include <locale.h>

int main() {
	
	int num=3;
	
	printf("5 Primeiros multiplos de 3: \n");
	printf("\n");
	
	for(num = 3; num < 18; num+= 3) {
		printf("%d\n", num);
	}
		
	system("pause");
	return 0;
}

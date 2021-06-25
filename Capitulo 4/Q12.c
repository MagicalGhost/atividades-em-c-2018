#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int x;
    
	printf("1\n2\n3\n4\n5\n6\n7\n");
	printf("escolha uma opcao: ");
	scanf("%d", &x);
	
	switch(x) {
		case 1:
			printf("domingo");
			break;
		case 2:
			printf("segunda");
			break;
		case 3:
			printf("terca");
			break;
		case 4:
			printf("quarta");
			break;
		case 5:
			printf("quinta");
			break;
		case 6:
			printf("sexta");
			break;
		case 7:
			printf("sabado");
			break;
		default: printf("opcao invalida");
	}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	float km;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Informe a dist�ncia em quilom�tros por hora: ");
		scanf("%f", &km);
		if(km<0) {
			printf("Apenas numero positivo!!\n");
		}
	}while(km<0);
	
	printf("Essa dist�ncia em m/s �: %.2f\n", km/36.0);
	
	system("pause");
	return 0;
}

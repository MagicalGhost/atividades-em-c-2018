#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	float km;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Informe a distância em quilomêtros por hora: ");
		scanf("%f", &km);
		if(km<0) {
			printf("Apenas numero positivo!!\n");
		}
	}while(km<0);
	
	printf("Essa distância em m/s é: %.2f\n", km/36.0);
	
	system("pause");
	return 0;
}

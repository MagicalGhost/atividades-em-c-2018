#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	float hipotenusa, cat1, cat2;
	
	do{
		printf("Digite o valor do primeiro cateto: ");
		scanf("%f", &cat1);	
		if(cat1<=0){
			printf("Apenas numeros positivos!!\n");
		}
	}while(cat1<=0);
	
	do{
		printf("Digite o valor do segundo cateto: ");
		scanf("%f", &cat2);
		if(cat2<=0){
			printf("Apenas numeros positivos!!\n");
		}
	}while(cat2<=0);
	
	hipotenusa = sqrt(pow(cat1,2)+pow(cat2,2));
	
	printf("\n\nO valor da hipotenusa e %.1f\n\n", hipotenusa);
	
	system("pause");
	return 0;
}

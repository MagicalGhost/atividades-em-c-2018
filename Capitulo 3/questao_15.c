#include <stdio.h>
#include <stdlib.h>

int main() {

  int numero, centena, dezena, unidade;
  
  do{
  	printf("Digite um numero natural de 3 digitos: ");
  	scanf("%d", &numero);
  	if(numero<=0 || numero<99 || numero>999) {
  		printf("\nApenas numeros positivos de 3 digitos!!\n");
	  }
	} while(numero<=0 || numero<99 || numero>999);
  
  centena=(numero/100); //adquirindo a centena do numero;
  numero=(numero%100); //adquirindo o resto do numero atualizando a variavel;
  dezena=(numero/10); //adquirindo a dezena;
  unidade=(numero%10); //adquirindo a unidade;

  printf("\nInvertido: %d%d%d\n\n", unidade, dezena, centena);
  system("PAUSE");	
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char palavra[100], sub[100];
	int cont=0, i;
	
	printf("Informe uma palavra: ");
	fgets(palavra, 100, stdin);
	
	for(i=0; i<strlen(palavra); i++) //strlen serve para determinar o tamanho;
	{
		if((palavra[i]=='a')||(palavra[i]=='i')||(palavra[i]=='e')||(palavra[i]=='o')||(palavra[i]=='u'))
		{
			cont++;
			
			printf("Informe uma letra para substituir essa vogal: ");
			scanf("%c", sub[i]);
			getchar();
			palavra[i] = sub[i];
		}
	}
	
	printf("Palavra nova: %s", palavra);
	printf("Existe %d vogail(s)!\n", cont);
	
	return 0;
}

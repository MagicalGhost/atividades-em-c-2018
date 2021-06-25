#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    
		printf("escolha um numero de 1 a 12: ");
		scanf("%f", &x);
		
		if ( x == 1 ){
			printf("janeiro");
		}
		if (x == 2 ){
			printf("fervereiro");
		}
		if ( x == 3 ){
			printf("marco");
		}
		if ( x == 4 ){
			printf("abril");
		}
		if ( x == 5 ){
			printf("maio");
		}
		if ( x == 6 ){
			printf("junho");
		}
		if ( x == 7 ){
			printf("julho");
		}
		if ( x == 8 ){
			printf("agosto");
		}
		if ( x == 9 ){
			printf("setembro");
		}
		if ( x == 10 ){
			printf("outubro");
		}
		if ( x == 11 ){
			printf("novembro");
		}
		if ( x == 12 ){
			printf("dezembro");
		}
		if (x<=0 || x>12){
			printf("ERROR!!");
		}
    return 0;
}

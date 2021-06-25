#include<stdio.h>
#include<conio.h>

int main() {
	
    int a[3][3], menor, l, cl;
  
	for(l = 0; l < 3; l++){
		for(cl = 0; cl <3; cl++){
	    	printf("Informe um valor para linha %d e coluna %d: ", l, cl);
	        scanf("%d", &a[l][cl]);
	    }
	}
	
  	menor = a[0][0];
  	printf("\n");
  	
    for(l = 0; l < 3; l++){
        for(cl = 0; cl <3; cl++){
            if(menor >= a[l][cl]){
                menor = a[l][cl];
            }
        }
    }
    printf("O menor numero foi: %d", menor);
    return 0;
}

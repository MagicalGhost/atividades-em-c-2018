#include<stdio.h>
#include<conio.h>

int main() {
	
	int a[4][4], m10, l, c, v=0;
	  
    for(l = 0; l < 4; l++){
    	for(c = 0; c < 4; c++){
	        printf("informe um valor para linha %d e coluna %d: ", l, c);
	        scanf("%d", &a[l][c]);
	    }
	}
	
    m10 = a[0][0];
    
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            if(a[l][c] > 10){
                m10 = a[l][c];
                v += 1;
            }
        }
    }
    printf("\nForam lidos %d valores maiores que 10\n", v);
    return 0;
}

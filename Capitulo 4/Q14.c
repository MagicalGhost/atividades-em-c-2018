#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n3, n5;
    
    printf("informe um valor: ");
    scanf("%d", &n);

    n3 = n%3;
    n5 = n%5;
    
    if(n3 == 0){
        printf("o numero e divisivel por 3");
    }
    if(n5 == 0){
        printf("\no numero e divisivel por 5");
    }
    if(n3 != 0 && n5 != 0){
        printf("\no numero nao e divisivel nem por 3 e nem por 5");
    }
    return 0;
}

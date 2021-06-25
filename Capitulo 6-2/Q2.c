#include<stdio.h>
#include<conio.h>
int main()
{
  int a[4][4], menor, maior, l, cl, k, y, r, s;
  k = y = r = s = 0;
  
  for(l = 0; l < 4; l++){
    for(cl = 0; cl < 4; cl++){
        printf("informe um valor para linha %d e coluna %d: ", l,cl);
        scanf("%d", &a[l][cl]);
    }
  }
  menor = a[0][0];
  maior = a[0][0];
  
    for(l = 0; l < 4; l++){
        for(cl = 0; cl < 4; cl++){
            if(menor >= a[l][cl]){
                menor = a[l][cl];
                r = l;
                s =cl;
            }
            if(maior <= a[l][cl]){
                maior = a[l][cl];
                k = l;
                y = cl;
            }
        }
    }
    printf("\no maior numero e %d da linha %d e coluna %d\n", maior, k , y);
    printf("o menor numero e %d da linha %d e coluna %d\n", menor, r, s);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b,c, x, delta, deltaraiz, x2;
    
    printf("informe o valor de A: ");
    scanf("%f", &a);
    
    printf("informe o valor de B: ");
    scanf("%f", &b);
    
    printf("informe o valor de C: ");
    scanf("%f", &c);

    delta = pow(b,2.0)-(4*a*c);
    
    deltaraiz = sqrt(delta);
    
    x = (-(b) + deltaraiz)/(2*a);
    
    x2 = (-(b) - deltaraiz)/(2*a);

    if (a == 0){
        printf("nao e equacao do segundo grau");
	}
    else if (delta > 0){
        printf("a raiz de delta e: %2.f", deltaraiz);
        printf(" \ne o resultado com raiz positiva da equacao e:%2.f\ne o resultado com raiz negativa e: %2.f", x, x2);
    }
    else if (delta < 0){
        printf("nao existe raiz");
    }
    else if (delta == 0){
        printf("a raiz e unica, e = %2.f", deltaraiz);
        printf(" e o resultado da equacao e: %2.f", x);
    }

    return 0;
}

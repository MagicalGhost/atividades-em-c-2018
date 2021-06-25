#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592;
    float rad, angulo;
    
    printf("Informe um angulo em graus: ");
    scanf("%f", &angulo);
    
    rad = (angulo * pi) / 180;
    
    printf("\aO angulo em radianos e de: %.2f\n", rad);
    
    system("pause");
    return 0;
}

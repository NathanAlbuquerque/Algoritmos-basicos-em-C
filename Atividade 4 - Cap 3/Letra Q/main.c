#include <stdio.h>

int main() 
{
    const float PI = 3.1415926535;
    float R, A;

    printf("Informe o raio da circulo: ");
    scanf("%f", &R);
    
    A = PI * R * R;

    printf("A area da circunferencia e: %f", A);

    return 0;
}
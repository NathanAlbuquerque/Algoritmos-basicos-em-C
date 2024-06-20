#include <stdio.h>

int main() 
{
    const float PI = 3.1415926535;
    float RAIO, VOLUME;

    printf("Informe o raio da esfera: ");
    scanf("%f", &RAIO);

    VOLUME = (4 / 3) * PI * RAIO * RAIO * RAIO;

    printf("O volume da esfera : %f", VOLUME);

    return 0;
}
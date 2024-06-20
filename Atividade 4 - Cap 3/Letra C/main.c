#include <stdio.h>

int main() 
{
    const float PI = 3.1415926535;
    float R, ALTURA, VOLUME;

 	printf("Informe a altura da lata de óleo: ");
    scanf("%f", &ALTURA);
    
    printf("Informe o raio da lata de óleo: ");
    scanf("%f", &R);

    VOLUME = PI * R * R * ALTURA;

    printf("O volume da lata de óleo é: %.2f", VOLUME);

    return 0;
}
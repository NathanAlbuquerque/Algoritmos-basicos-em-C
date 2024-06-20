#include <stdio.h>

int main() 
{
    const float CONV_METRO = 0.3048;
    float PE, METRO;

    printf("Informe o medida em pés: ");
    scanf("%f", &PE);

    METRO = PE * CONV_METRO;

    printf("O valor convertido em metros: %f", METRO);

    return 0;
}
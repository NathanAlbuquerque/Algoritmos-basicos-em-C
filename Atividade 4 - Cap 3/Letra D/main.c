#include <stdio.h>

int main() 
{
    float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;

 	printf("Informe o tempo da viagem: ");
    scanf("%f", &TEMPO);
    
    printf("Informe a velocidade média na viagem: ");
    scanf("%f", &VELOCIDADE);

    DISTANCIA = TEMPO * VELOCIDADE;
    LITROS_USADOS = DISTANCIA / 12;

    printf("O tempo da viagem: %.2f", TEMPO);
    printf("A velocidade média da viagem: %.2f", VELOCIDADE);
    printf("A distancia da viagem: %.2f", DISTANCIA);
    printf("Os litros usados da viagem: %.2f", LITROS_USADOS);

    return 0;
}
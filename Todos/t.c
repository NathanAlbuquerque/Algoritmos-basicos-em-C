#include <stdio.h>

int main() 
{
    float DISTANCIA, TEMPO, VELOCIDADE;

    printf("Informe a distancia(Km) do alvo: ");
    scanf("%f", &DISTANCIA);

    printf("Informe o tempo(min) do percurso: ");
    scanf("%f", &TEMPO);

    VELOCIDADE = (DISTANCIA * 1000) / (TEMPO * 60);
    
    printf("A velocidade(m/s) do projeto: %f", VELOCIDADE);

    return 0;
}
#include <stdio.h>

int main() 
{
    float f, c;
 
 	printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    
    c = ((f - 32) * 5) / 9;
    
    printf("Convertendo a temperatura em Celsius fica: %.2f", c);
 
    return 0;
}
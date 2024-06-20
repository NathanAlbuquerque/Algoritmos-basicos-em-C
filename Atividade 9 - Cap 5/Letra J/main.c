#include <stdio.h>

int main() {
  printf("j) Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O programa deve apresentar os valores das duas temperaturas.\n");
  for (int celsius = 10; celsius <= 100; celsius += 10) {
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%d °C = %.1f °F\n", celsius, fahrenheit);
  }
  return 0;
}
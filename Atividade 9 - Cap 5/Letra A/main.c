#include <stdio.h>

int main() {
  printf("a) Elaborar um programa que apresente como resultado os quadrados armazenados na memória dos números inteiros existentes na faixa de valores de 15 a 200.\n");
  for (int i = 15; i <= 200; i++) {
    printf("%d^2 = %d\n", i, i * i);
  }
  return 0;
}
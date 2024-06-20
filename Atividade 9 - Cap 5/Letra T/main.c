#include <stdio.h>

int main() {
  printf("t) Elaborar um programa que apresente os quadrados sem armazená-los na memória dos valores inteiros existentes na faixa de valores de 15 a 200 com saltos de 3 em 3.\n");
  for (int i = 15; i <= 200; i += 3) {
    printf("%d ^ 2 = %d\n", i, i * i);
  }
  return 0;
}
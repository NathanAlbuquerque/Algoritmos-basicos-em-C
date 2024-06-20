#include <stdio.h>

int main() {
  printf("s) Elaborar um programa que apresente o resultado inteiro da divisão de dois números quaisquer, representando o dividendo e o divisor da divisão a ser processada. Sugestão: para a elaboração do programa, não utilize o operador aritmético de divisão com quociente inteiro div. Use uma solução baseada em laço. O programa deve apresentar como resultado (quociente) quantas vezes o divisor cabe no dividendo.\n");
  int dividendo, divisor, quociente = 0;
  printf("Digite o dividendo: ");
  scanf("%d", &dividendo);
  printf("Digite o divisor: ");
  scanf("%d", &divisor);
  if (divisor == 0) {
    printf("Erro: Divisão por zero!\n");
  } else {
    int temp = dividendo;
    while (temp >= divisor) {
      temp -= divisor;
      quociente++;
    }
    printf("Quociente da divisão: %d\n", quociente);
  }
  return 0;
}
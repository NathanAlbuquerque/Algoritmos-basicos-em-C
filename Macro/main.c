#include <math.h>
#include <stdio.h>

void subprogramaA();
void subprogramaB();
void subprogramaC();
void subprogramaD();
void subprogramaE();
void subprogramaF();
void subprogramaG();
void subprogramaH();
void subprogramaI();
void subprogramaJ();
void subprogramaK();
void subprogramaL();
void subprogramaM();
void subprogramaN();
void subprogramaO();
void subprogramaP();
void subprogramaQ();
void subprogramaR();
void subprogramaS();
void subprogramaT();
void subprogramaU();
void subprogramaV();
void subprogramaW();
void subprogramaX();
void subprogramaY();
void subprogramaZ();
void resetarPrograma();

int main()
{
  char letraDaQuestao;
  int programaIniciado = 0;

  printf("\033[2J");

  do
  {
    if(programaIniciado == 1) {
      resetarPrograma();
    }
    programaIniciado = 1;
    
    printf("Escolha um subprograma para executar:\n\n");

    printf("a) Conversao de Celsius para Fahrenheit\n");
    printf("b) Conversao de Fahrenheit para Celsius\n");
    printf("c) Calculo do volume de uma lata de oleo\n");
    printf("d) Calculo de litros de combustivel gastos em uma viagem\n");
    printf("e) Calculo de prestacao com taxa de atraso\n");
    printf("f) Troca de valores entre A e B\n");
    printf("g) Operacoes com propriedades distributivas\n");
    printf("h) Calculo do Volume de uma Caixa Retangular\n");
    printf("i) Valor Elevado ao Quadrado\n");
    printf("j) Quadrado da Diferenca entre Dois Valores\n");
    printf("k) Conversao de Dolar para Real\n");
    printf("l) Conversao de Real para Dolar\n");
    printf("m) Soma dos Quadrados de Tres Valores\n");
    printf("n) Quadrado da Soma de Tres Valores\n");
    printf("o) Produto e Soma de Quatro Valores\n");
    printf("p) Calculo do Novo Salario com Reajuste\n");
    printf("q) Calculo da area de uma Circunferencia\n");
    printf("r) Apuracao de Votos em Eleicao Sindical\n");
    printf("s) Operacoes Aritmeticas Basicas\n");
    printf("t) Calculo da Velocidade de um Projetil\n");
    printf("u) Calculo do Volume de uma Esfera\n");
    printf("v) Calculo de Potencia\n");
    printf("w) Conversao de Pes para Metros\n");
    printf("x) Calculo de Raiz com Base e indice\n");
    printf("y) Sucessor e Antecessor de um Valor Inteiro\n");
    printf("z) Quadrado da Divisao de Dois Valores Inteiros\n");

    printf("\n0) Sair do programa\n");

    printf("Opcao: ");
    scanf(" %c", &letraDaQuestao);
    printf("\033[2J");

    switch (letraDaQuestao)
    {
    case 'a':
      subprogramaA();
      break;
    case 'b':
      subprogramaB();
      break;
    case 'c':
      subprogramaC();
      break;
    case 'd':
      subprogramaD();
      break;
    case 'e':
      subprogramaE();
      break;
    case 'f':
      subprogramaF();
      break;
    case 'g':
      subprogramaG();
      break;
    case 'h':
      subprogramaH();
      break;
    case 'i':
      subprogramaI();
      break;
    case 'j':
      subprogramaJ();
      break;
    case 'k':
      subprogramaK();
      break;
    case 'l':
      subprogramaL();
      break;
    case 'm':
      subprogramaM();
      break;
    case 'n':
      subprogramaN();
      break;
    case 'o':
      subprogramaO();
      break;
    case 'p':
      subprogramaP();
      break;
    case 'q':
      subprogramaQ();
      break;
    case 'r':
      subprogramaR();
      break;
    case 's':
      subprogramaS();
      break;
    case 't':
      subprogramaT();
      break;
    case 'u':
      subprogramaU();
      break;
    case 'v':
      subprogramaV();
      break;
    case 'w':
      subprogramaW();
      break;
    case 'x':
      subprogramaX();
      break;
    case 'y':
      subprogramaY();
      break;
    case 'z':
      subprogramaZ();
      break;
    case '0':
      printf("Programa finalizado!\n");
      break;
    default:
      printf("Opcao escolhida nao, digita caractere de a-z ou 0 para finalizar o programa.\n");
    }
  } while (letraDaQuestao != '0');

  return 0;
}

void resetarPrograma()
{
  char reset;
  printf("\n\nPressione qualquer tecla para prosseguir...");
  scanf("%c", &reset);
  scanf("%c", &reset);
  printf("\033[2J");
}

void subprogramaA()
{
  int c;
  float f;

  printf("(a) Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Fahrenheit. A formula de conversao e F ← C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.\n\n");

  printf("Informe a temperatura em Celsius: ");
  scanf("%d", &c);

  f = c * 9 / 5 + 32;

  printf("Convertendo a temperatura em Fahrenheit fica: %.2f", f);
}

void subprogramaB()
{
  float f, c;

  printf("(b) Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius. A formula de conversao e C ← ((F - 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.\n\n");

  printf("Informe a temperatura em Fahrenheit: ");
  scanf("%f", &f);

  c = ((f - 32) * 5) / 9;

  printf("Convertendo a temperatura em Celsius fica: %.2f", c);
}

void subprogramaC()
{
  const float PI = 3.1415926535;
  float R, ALTURA, VOLUME;

  printf("(c) Calcular e apresentar o valor do volume de uma lata de oleo, utilizando a formula VOLUME ← 3.14159 * R ↑ 2 * ALTURA.\n\n");

  printf("Informe a altura da lata de oleo: ");
  scanf("%f", &ALTURA);

  printf("Informe o raio da lata de oleo: ");
  scanf("%f", &R);

  VOLUME = PI * R * R * ALTURA;

  printf("O volume da lata de oleo e: %.2f", VOLUME);
}

void subprogramaD()
{
  float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;

  printf("(d) Efetuar o calculo da quantidade de litros de combustivel gasta em uma viagem, utilizando um automovel que faz 12 quilometros por litro. Para obter o calculo, o usuario deve fornecer o tempo gasto (variavel TEMPO) e a velocidade media (variavel VELOCIDADE) durante a viagem. Dessa forma, sera possivel obter a distancia percorrida com a formula DISTANCIA ← TEMPO * VELOCIDADE. A partir do valor da distancia, basta calcular a quantidade de litros de combustivel utilizada na viagem com a formula LITROS_USADOS ← DISTANCIA / 12. O programa deve apresentar os valores da velocidade media, tempo gasto na viagem, a distancia percorrida e a quantidade de litros utilizada na viagem.\n\n");

  printf("Informe o tempo da viagem: ");
  scanf("%f", &TEMPO);

  printf("Informe a velocidade media na viagem: ");
  scanf("%f", &VELOCIDADE);

  DISTANCIA = TEMPO * VELOCIDADE;
  LITROS_USADOS = DISTANCIA / 12;

  printf("O tempo da viagem: %.2f", TEMPO);
  printf("A velocidade media da viagem: %.2f", VELOCIDADE);
  printf("A distancia da viagem: %.2f", DISTANCIA);
  printf("Os litros usados da viagem: %.2f", LITROS_USADOS);
}

void subprogramaE()
{
  float VALOR, TAXA, TEMPO, PRESTACAO;

  printf("(e) Efetuar o calculo e apresentar o valor de uma prestacao de um bem em atraso, utilizando a formula PRESTAcAO ← VALOR + (VALOR * (TAXA / 100) * TEMPO).\n\n");

  printf("Informe o valor do bem: ");
  scanf("%f", &VALOR);

  printf("Informe a taxa de atraso: ");
  scanf("%f", &TAXA);

  printf("Informe o tempo de atraso: ");
  scanf("%f", &TEMPO);

  PRESTACAO = VALOR + VALOR * (TAXA / 100) * TEMPO;

  printf("O valor da prestacao fica: %.2f", PRESTACAO);
}

void subprogramaF()
{
  int A, B, C;

  printf("(f) Ler dois valores para as variaveis A e B e efetuar a troca dos valores de forma que a variavel A passe a possuir o valor da variavel B e a variavel B passe a possuir o valor da variavel A. Apresentar os valores apos a efetivacao do processamento da troca.\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  C = A;
  A = B;
  B = C;

  printf("O valor de A: %d", A);
  printf("\n");
  printf("O valor de B: %d", B);
}

void subprogramaG()
{
  int A, B, C, D;
  int SOMA1, SOMA2, SOMA3, SOMA4, SOMA5, SOMA6;
  int MULT1, MULT2, MULT3, MULT4, MULT5, MULT6;

  printf("(g) Ler quatro valores numericos inteiros e apresentar os resultados armazenados em memoria das adicoes e multiplicacoes utilizando o mesmo raciocinio aplicado quando do uso de propriedades distributivas para a maxima combinacao possivel entre as quatro variaveis. Nao e para calcular a propriedade distributiva, deve-se apenas usar a sua forma de combinacao. Considerando a leitura de valores para as variaveis A, B, C e D, devem ser feitas seis adicoes e seis multiplicacoes, ou seja, deve ser combinada a variavel A com a variavel B, a variavel A com a variavel C, a variavel A com a variavel D. Depois, e necessario combinar a variavel B com a variavel C e a variavel B com a variavel D e, por fim, a variavel C sera combinada com a variavel D.\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  printf("Informe o valor de C: ");
  scanf("%d", &C);

  printf("Informe o valor de D: ");
  scanf("%d", &D);

  SOMA1 = A + B;
  SOMA2 = A + C;
  SOMA3 = A + D;
  SOMA4 = B + C;
  SOMA5 = B + D;
  SOMA6 = C + D;

  MULT1 = A * B;
  MULT2 = A * C;
  MULT3 = A * D;
  MULT4 = B * C;
  MULT5 = B * D;
  MULT6 = C * D;

  printf("A soma de A por B: %d", SOMA1);
  printf("\n");
  printf("A soma de A por C: %d", SOMA2);
  printf("\n");
  printf("A soma de A por D: %d", SOMA3);
  printf("\n");
  printf("A soma de B por C: %d", SOMA4);
  printf("\n");
  printf("A soma de B por D: %d", SOMA5);
  printf("\n");
  printf("A soma de C por D: %d", SOMA6);

  printf("A multiplicacao de A por B: %d", MULT1);
  printf("\n");
  printf("A multiplicacao de A por C: %d", MULT2);
  printf("\n");
  printf("A multiplicacao de A por D: %d", MULT3);
  printf("\n");
  printf("A multiplicacao de B por C: %d", MULT4);
  printf("\n");
  printf("A multiplicacao de B por D: %d", MULT5);
  printf("\n");
  printf("A multiplicacao de C por D: %d", MULT6);
}

void subprogramaH()
{
  float COMPRIMENTO, LARGURA, ALTURA, VOLUME;

  printf("(h) Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, utilizando a formula VOLUME ← COMPRIMENTO * LARGURA * ALTURA.\n\n");

  printf("Informe o COMPRIMENTO da caixa: ");
  scanf("%f", &COMPRIMENTO);

  printf("Informe o LARGURA da caixa: ");
  scanf("%f", &LARGURA);

  printf("Informe o ALTURA da caixa: ");
  scanf("%f", &ALTURA);

  VOLUME = COMPRIMENTO * LARGURA * ALTURA;

  printf("O volume da de B: %f", VOLUME);
}

void subprogramaI()
{
  int X;

  printf("(i) Efetuar a leitura de um valor numerico inteiro e apresentar o resultado do valor lido elevado ao quadrado, sem efetuar o armazenamento do resultado em memoria.\n\n");

  printf("Informe o valor de X: ");
  scanf("%d", &X);

  printf("O valor do quadrado de X: %d", X * X);
}

void subprogramaJ()
{
  int A, B, C;

  printf("(j) Ler dois valores numericos inteiros (representados pelas variaveis A e B) e apresentar o resultado armazenado em memoria do quadrado da diferenca do primeiro valor (variavel A) em relacao ao segundo valor (variavel B).\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  C = (A - B) * (A - B);

  printf("O quadrado da diferenca do primeiro valor (variavel A) em relacao ao segundo valor (variavel B): %d", C);
}

void subprogramaK()
{
  float COTACAO_BR_US, VALOR_US, VALOR_RS;

  printf("(k) Elaborar um programa que apresente o valor da conversao em real (R$) de um valor lido em dolar (US$). O programa deve solicitar o valor da cotacao do dolar e tambem a quantidade de dolares disponivel com o usuario e armazenar em memoria o valor da conversao antes da apresentacao.\n\n");

  printf("Informe o valor da cotacao do dolar para real: ");
  scanf("%f", &COTACAO_BR_US);

  printf("Informe o valor em dolar: ");
  scanf("%f", &VALOR_US);

  VALOR_RS = VALOR_US * COTACAO_BR_US;

  printf("O valor em dolar convertido em real fica: %f", VALOR_RS);
}

void subprogramaL()
{
  float COTACAO_US_RS, VALOR_RS, VALOR_US;

  printf("(l) Elaborar um programa que apresente o valor da conversao em dolar (US$) de um valor lido em real (R$). O programa deve solicitar o valor da cotacao do dolar e tambem a quantidade de reais disponivel com o usuario e armazenar em memoria o valor da conversao antes da apresentacao.\n\n");

  printf("Informe o valor da cotacao do real para dolar: ");
  scanf("%f", &COTACAO_US_RS);

  printf("Informe o valor em real: ");
  scanf("%f", &VALOR_RS);

  VALOR_US = VALOR_RS * COTACAO_US_RS;

  printf("O valor em dolar convertido em dolar fica: %f", VALOR_US);
}

void subprogramaM()
{
  int A, B, C, RESULTADO;

  printf("(m) Construir um programa que leia tres valores numericos inteiros (representados pelas variaveis A, B e C) e apresentar como resultado final, armazenado em memoria, o valor da soma dos quadrados dos tres valores lidos.\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  printf("Informe o valor de C: ");
  scanf("%d", &C);

  RESULTADO = A * A + B * B + C * C;

  printf("O resultado da soma dos quadrados de A, B e C: %d", RESULTADO);
}

void subprogramaN()
{
  int A, B, C, RESULTADO;

  printf("(n) Construir um programa que leia tres valores numericos inteiros (representados pelas variaveis A, B e C) e apresentar como resultado final, armazenado em memoria, o valor do quadrado da soma dos tres valores lidos.\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  printf("Informe o valor de C: ");
  scanf("%d", &C);

  RESULTADO = (A + B + C) * (A + B + C);

  printf("O resultado do quadrado da soma de A, B e C: %d", RESULTADO);
}

void subprogramaO()
{
  int A, B, C, D, P, S;

  printf("(o) Elaborar um programa que leia quatro valores numericos inteiros (variaveis A, B, C e D). Ao final, o programa deve apresentar o resultado, armazenado em memoria, do produto (variavel P) do primeiro com o terceiro valor, e o resultado da soma (variavel S) do segundo com o quarto valor.\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  printf("Informe o valor de C: ");
  scanf("%d", &C);

  printf("Informe o valor de D: ");
  scanf("%d", &D);

  P = A * C;
  S = B + D;

  printf("O resultado do produto: %d", P);
  printf("\n");
  printf("O resultado da soma: %d", S);
}

void subprogramaP()
{
  float SM, PR, NS;

  printf("(p) Elaborar um programa que leia o valor numerico correspondente ao salario mensal (variavel SM) de um trabalhador e tambem fazer a leitura do valor do percentual de reajuste (variavel PR) a ser atribuido. Apresentar o valor do novo salario (variavel NS) apos o armazenamento do calculo em memoria.\n\n");

  printf("Informe o salario mensal: ");
  scanf("%f", &SM);

  printf("Informe o percentual de reajuste: ");
  scanf("%f", &PR);

  NS = SM + (SM * PR);

  printf("O novo salario: %f", NS);
}

void subprogramaQ()
{
  const float PI = 3.1415926535;
  float R, A;

  printf("(q) Elaborar um programa que calcule e apresente o valor do resultado da area de uma circunferencia (variavel A). O programa deve solicitar a entrada do valor do raio da circunferencia (variavel R). Para a execucao deste problema, utilize a formula A ← 3.14159265* R ↑ 2.\n\n");

  printf("Informe o raio da circulo: ");
  scanf("%f", &R);

  A = PI * R * R;

  printf("A area da circunferencia e: %f", A);
}

void subprogramaR()
{
  float A, B, C, NULOS, BRANCOS, TOTAL, VALIDOS;
  float PERCENT_VALID, PERCENT_A, PERCENT_B, PERCENT_C, PERCENT_NULOS, PERCENT_BRANCOS;

  printf("(r) Em uma eleicao sindical concorreram ao cargo de presidente tres candidatos (representados pelas variaveis A, B e C). Durante a apuracao dos votos foram computados votos nulos e em branco, alem dos votos validos para cada candidato. Deve ser criado um programa de computador que faca a leitura da quantidade de votos validos para cada candidato, alem de ler tambem a quantidade de votos nulos e em branco. Ao final, o programa deve apresentar o numero total de eleitores, considerando votos validos, nulos e em branco;o percentual correspondente de votos validos em relacao a quantidade de eleitores;o percentual correspondente de votos validos do candidato A em relacao a quantidade de eleitores;o percentual correspondente de votos validos do candidato B em relacao a quantidade de eleitores;o percentual correspondente de votos validos do candidato C em relacao a quantidade de eleitores;o percentual correspondente de votos nulos em relacao a quantidade de eleitores;e, por ultimo, o percentual correspondente de votos em branco em relacao a quantidade de eleitores. Todos os calculos devem efetivamente ser armazenados em memoria.\n\n");

  printf("Informe a quantidade de votos validos para o candidato A: ");
  scanf("%f", &A);

  printf("Informe a quantidade de votos validos para o candidato B: ");
  scanf("%f", &B);

  printf("Informe a quantidade de votos validos para o candidato C: ");
  scanf("%f", &C);

  printf("Informe a quantidade de votos nulos: ");
  scanf("%f", &NULOS);

  printf("Informe a quantidade de votos brancos: ");
  scanf("%f", &BRANCOS);

  TOTAL = A + B + C + NULOS + BRANCOS;
  VALIDOS = A + B + C;
  PERCENT_VALID = VALIDOS / TOTAL * 100;
  PERCENT_A = A / TOTAL * 100;
  PERCENT_B = B / TOTAL * 100;
  PERCENT_C = C / TOTAL * 100;
  PERCENT_NULOS = NULOS / TOTAL * 100;
  PERCENT_BRANCOS = BRANCOS / TOTAL * 100;

  printf("O total de eleitores: %.0f", TOTAL);
  printf("\n");
  printf("O total de volos validos: %.0f", VALIDOS);
  printf("\n");
  printf("O total de volos nulos: %.0f", NULOS);
  printf("\n");
  printf("O total de volos bracos: %.0f", BRANCOS);
  printf("\n");
  printf("O percentual correspondente de votos validos em relacao à quantidade de eleitores: %.2f%%", PERCENT_VALID);
  printf("\n");
  printf("O percentual correspondente de votos validos do candidato A: %.2f%%", PERCENT_A);
  printf("\n");
  printf("O percentual correspondente de votos validos do candidato B: %.2f%%", PERCENT_B);
  printf("\n");
  printf("O percentual correspondente de votos validos do candidato C: %.2f%%", PERCENT_C);
  printf("\n");
  printf("O percentual correspondente de votos nulos: %.2f%%", PERCENT_NULOS);
  printf("\n");
  printf("O percentual correspondente de votos brancos: %.2f%%", PERCENT_BRANCOS);
}

void subprogramaS()
{
  int A, B, SOMA, SUBTRACAO, MULTIPLICACAO;
  float DIVISAO;

  printf("(s) Elaborar um programa que leia dois valores numericos reais desconhecidos representados pelas variaveis A e B. Calcular, armazenar e apresentar os resultados das quatro operacoes aritmeticas basicas.\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  SOMA = A + B;
  SUBTRACAO = A - B;
  MULTIPLICACAO = A * B;
  DIVISAO = (float)A / B;

  printf("A soma de A e B: %d", SOMA);
  printf("\n");
  printf("A subtracao de A e B: %d", SUBTRACAO);
  printf("\n");
  printf("A multiplicacao de A e B: %d", MULTIPLICACAO);
  printf("\n");
  printf("A divisao de A e B: %.2f", DIVISAO);
}

void subprogramaT()
{
  float DISTANCIA, TEMPO, VELOCIDADE;

  printf("(t) Construir um programa que calcule, armazene e apresente em metros por segundo o valor da velocidade de um projetil que percorre uma distancia em quilometros a um espaco de tempo em minutos. Utilize a formula VELOCIDADE ← (DISTaNCIA * 1000) / (TEMPO * 60).\n\n");

  printf("Informe a distancia(Km) do alvo: ");
  scanf("%f", &DISTANCIA);

  printf("Informe o tempo(min) do percurso: ");
  scanf("%f", &TEMPO);

  VELOCIDADE = (DISTANCIA * 1000) / (TEMPO * 60);

  printf("A velocidade(m/s) do projeto: %f", VELOCIDADE);
}

void subprogramaU()
{
  const float PI = 3.1415926535;
  float RAIO, VOLUME;

  printf("(u) Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera. Utilize a formula VOLUME ← (4 / 3) * 3.14159 * (RAIO ↑ 3).\n\n");

  printf("Informe o raio da esfera: ");
  scanf("%f", &RAIO);

  VOLUME = (4 / 3) * PI * RAIO * RAIO * RAIO;

  printf("O volume da esfera : %f", VOLUME);
}

void subprogramaV()
{
  int A, B, C;

  printf("(v) Elaborar um programa que leia dois valores numericos inteiros, os quais devem representar a base e o expoente de uma potencia, calcular a potencia, armazenar em memoria o resultado calculado e apresentar o resultado obtido.\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  C = pow(A, B);

  printf("O valor de A elevado a B: %d", C);
}

void subprogramaW()
{
  const float CONV_METRO = 0.3048;
  float PE, METRO;

  printf("(w) Elaborar um programa que leia uma medida em pes, calcular, armazenar e apresentar o seu valor convertido em metros, lembrando que um pe mede 0,3048 metro, ou seja, um pe e igual a 30,48 centimetros.\n\n");

  printf("Informe o medida em pes: ");
  scanf("%f", &PE);

  METRO = PE * CONV_METRO;

  printf("O valor convertido em metros: %f", METRO);
}

void subprogramaX()
{
  int A, B;
  float C;

  printf("(x) Elaborar um programa que calcule e armazene uma raiz de base qualquer com indice qualquer.\n\n");

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  C = pow(A, (1 / B));

  printf("O valor de A elevado a 1/B: %.2f", C);
}

void subprogramaY()
{
  int X0, X1, X2;

  printf("(y) Construir um programa que leia um valor numerico inteiro e apresente como resultado armazenado em memoria os seus valores sucessor e antecessor.\n\n");

  printf("Informe o valor de um numero: ");
  scanf("%d", &X1);

  X2 = X1 + 1;
  X0 = X1 - 1;

  printf("O sucessor: %d", X2);
  printf("\n");
  printf("O antecessor: %d", X0);
}

void subprogramaZ()
{
  int A, B;
  float C;

  printf("Informe o valor de A: ");
  scanf("%d", &A);

  printf("Informe o valor de B: ");
  scanf("%d", &B);

  C = (A / B) * (A / B);

  printf("O resultado do quadrado da divisao de A em relacao a B: %.2f", C);
}
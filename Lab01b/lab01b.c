#include <stdio.h>


#include <stdlib.h>

void ex01() {
  
  printf("Exercicio 1 \n");
  int matrizEx01[2][2];
  // preencheu a matrizEx01
  matrizEx01[0][0] = 4;
  matrizEx01[0][1] = 9;
  matrizEx01[1][0] = 5;
  matrizEx01[1][1] = 3;

  int linha;
  // verificar o maior número por linha
  // compara o elemento
  int min = matrizEx01[0][0];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (min > matrizEx01[i][j]) {
        min = matrizEx01[i][j];
        linha = i;
      }
    }
  }
  printf("O menor elemento está na linha %i \n", linha);
  printf("Elemento mínimo: %i \n", min);
  printf("_____________________________________\n");
}

void ex02() {
  printf("Exercício 2: \n");
  // input das notas
  int N1 = 8;
  int N2 = 4;
  int N3 = 9;
  int ME = 6;
  int MA;

  // calculo da MA
  MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7;

  // atribuicao da Nota conforme a tabela
  if (MA > 9) {
    printf("Nota A\n");
  } else if (MA > 7.5 && MA < 9) {
    printf("Nota B\n");
  } else if (MA > 6 && MA < 7.5) {
    printf("Nota C\n");
  } else if (MA > 4 && MA < 6) {
    printf("Nota D\n");
  } else {
    printf("Nota E\n");
  }
  printf("_____________________________________\n");
}

void ex03() {
  
  printf ("Exercicio 3\n");
  int valor;
  int m = 1;
  printf("Digite um valor ímpar: ");
  //lendo o valor que o usuario inseriu
  scanf("%i", &valor);
  while (valor % 2 == 0) {
    //caso o valor inserido seja par
    printf("Erro! Digite valores ímpares! \n");
    printf("Digite um valor ímpar: ");
    scanf("%i", &valor);
  }
  //variaveis inteiras
  int i;
  int j;
  int k;
  int l = 0;
  //imprimindo os espaços entre numeros
  for (i = 1; i <= valor; i++) {
    for (k = 0; k < l; k++ ) {
      printf(" ");
    }
  
  printf ("%d ", i);
  
  for (j = i+1; j <= valor; j++) {
    printf ("%d ", j);
  }
  //decrementando para eliminar o ultimo elemento
  valor -= 1;
  printf ("\n");
  l += 2;
  }
  printf("_____________________________________\n");
}


int main(void) {
    ex01();
    ex02();
    ex03();

    return 0;
  }
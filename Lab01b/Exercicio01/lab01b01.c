#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  
  int matriz[2][2];
  //preencheu a matriz
  matriz[0][0] = 4;
  matriz[0][1] = 9;
  matriz[1][0] = 5;
  matriz[1][1] = 3;
  
  int linha;
  //verificar o maior número por linha
  //compara o elemento 
  int min = matriz[0][0];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if(min > matriz[i][j]) {
          min = matriz[i][j];
          linha = i;
      }
    }
  }
  printf("O menor elemento está na linha %i \n",linha);
  printf("Elemento mínimo: %i", min);
  return 0;
}
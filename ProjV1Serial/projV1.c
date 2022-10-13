#include <stdio.h>
#include <stdbool.h>

//criacao da funcao para calculo dos fatoriais na serie de taylor
long double calculoFatorial(long double c) {
  //definicao do valor inicial do fatorial como 1
  long double fatorial = 1;
  //criacao da logica da multiplicacao dos valores de 1 a c, gerando o resultado do faltorial de c
  for(int i = 1; i <= c; i++) {
    fatorial *= i;
  }
  return fatorial;
}

long double serieDeTaylor() {
  //definicao das variaveis de valor final calculado (s), soma das expressoes fracionarias (soma) e valor total da soma das expressoes fracionarias (valor)
  static long double s;
  long double soma;
  long double valor = 0;
  long int t = 1;
  long double resultados[1000];
  //incrementa criacao das expressoes ate valor a limitacao do programa ser atingido, sendo cada expressao equivalente 1 dividido pelo fatorial de i
  while (true) {
    if(resultados[t-1] != resultados[t]) {
      soma=(1/calculoFatorial(t));
      valor+=soma;
      s = 1 + valor;
      resultados[t] = s;
      t++;
    }
    else {
      return t-1;
      break;
    }
  }
  printf("%Lf\n",s);
}

//chamada da funcao na main passando valores para parametros
int main(void) {
  printf("%Lf",serieDeTaylor());
  return 0;
}
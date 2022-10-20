#include <stdio.h>

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

long double serieDeTaylor(long double x, long int t) {
  //definicao das variaveis de valor final calculado (s), soma das expressoes fracionarias (soma) e valor total da soma das expressoes fracionarias (valor)
  static long double s;
  long double soma;
  long double valor = 0;
  //incrementa criacao das expressoes ate valor do tempo atingido, sendo cada expressao equivalente a 1 dividido pelo fatorial de i
  for(int i = 1; i <= t; i++) {
    soma = 1/calculoFatorial(i);
    valor+=soma;
  }
  //adiciona o valor 1 inicial a soma total
  s = 1 + valor;
  return s;
}

//chamada da funcao na main passando valores para parametros
int main(void) {
  long double valorNumInicial = 1;
  long double tempoAtingido = 5;
  printf("%Lf",serieDeTaylor(valorNumInicial, tempoAtingido));
  return 0;
}

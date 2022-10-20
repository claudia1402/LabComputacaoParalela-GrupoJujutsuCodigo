#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define n 1000000
int thread_count;

//criacao da funcao para calculo dos fatoriais na serie de taylor
long double calculoFatorial(long double c) {
  //definicao do valor inicial do fatorial como 1
  long double fatorial = 1;
  if(c >= 1) {
    for(int i = 1; i <= c; i++) {
    fatorial *= i;
    }
  }
  //criacao da logica da multiplicacao dos valores de 1 a c, gerando o resultado do fatorial de c
  return fatorial;
}

void *SerieDeTaylor(void *rank) {
  //definicao das variaveis de valor final calculado (s), soma das expressoes fracionarias (soma) e valor total da soma das expressoes fracionarias (valor)
  long my_rank = (long)rank;
  long double soma;
  long double valor = 0;
  long long my_n = n / thread_count;
  long long my_first_i = my_n * my_rank;
  long long my_last_i = my_first_i + my_n;
  //incrementa criacao das expressoes ate valor do tempo atingido, sendo cada expressao equivalente a 1 dividido pelo fatorial de i
  for(int i = my_first_i; i <= my_last_i; i++) {
    soma= 1/calculoFatorial(i);
    valor+=soma;
  }
  printf("valor: %Lf \n", valor);
  return NULL;
}

//chamada da funcao na main passando valores para parametros
int main(int argc, char *argv[]) {
  long thread;
  pthread_t* thread_handles;

  thread_count = strtol(argv[1], NULL, 10);
  //cria uma nova thread dentro de um processo
  for (thread = 0; thread < thread_count; thread++) {
    pthread_create(&thread_handles[thread], NULL, SerieDeTaylor, (void *)thread);
  }
  //espera pela thread especificada por thread para terminar
  for (thread = 0; thread < thread_count; thread++) {
    pthread_join(thread_handles[thread], NULL);
  }

  printf("\n");
  //termina o thread de chamada
  pthread_exit(NULL);
  return 0;
}

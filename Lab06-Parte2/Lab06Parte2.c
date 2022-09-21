#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>

long num_thread;
long long N;
double suma;
void *Thread_PiAprox(void *rank);
//argc tamanho do vetor argv, que é o vetor de entrada
//posição 0 é o nome do programa ou comando de execução
int main(int argc , char *argv[]) {
  if(argc < 3 ) {
    N = 2000;
    num_thread = 10;
  } else {
    N = atoi(argv[1]);
    num_thread = strtol(argv[2],NULL,10);
  }

  printf("Executando com N = %d e num_threads = %d\n", N, num_thread);
  
  long thread;
  pthread_t* thread_handless;

  thread_handless = malloc(num_thread*sizeof(pthread_t));

  for(thread = 0; thread < num_thread; thread++) {
    pthread_create(&thread_handless[thread], NULL, Thread_PiAprox, (void *)thread);
  }

  for (thread = 0; thread < num_thread; thread++) {
    pthread_join(thread_handless[thread], NULL);
  }

  printf("valor aproximado eh: %.15f\n", 4*suma);

  free(thread_handless);
  return 0;
  
}

void *Thread_PiAprox(void *rank){
  long my_rank = (long) rank;
  long long i;
  long long my_n = N/num_thread;
  long long my_first_i = my_rank*my_n;
  long long my_last_i = my_first_i + my_n;
  double factor;

  if (my_first_i % 2 == 0) {
    factor = 1;
  }
  else {
    factor = -1;
  }

  for(i = my_first_i; i < my_last_i; i++, factor = -1*factor) {
    suma += factor/(2*i+1);
  }
  return NULL;
}
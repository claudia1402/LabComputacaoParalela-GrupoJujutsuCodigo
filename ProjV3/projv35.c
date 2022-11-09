#include <stdio.h>
#include <omp.h>

long double calculoFatorial(long double c) {
  if (c == 0) {
    return 1;
  }
  long double fatorial = 1;
  for(int i = 1; i <= c; i++) {
    fatorial *= i;
  }
  return fatorial;
}

int main() {
  
  const int N=10000; 

  long double local_sum, sum; 

//numero de Threads
#pragma omp set_num_threads(5);
#pragma omp parallel private(local_sum) shared(sum) 
  { 
    local_sum = 0; 
    
#pragma omp for
    for (int i = 0; i <= N; i++) {
      local_sum += 1/calculoFatorial(i); 
    }


#pragma omp critical 
    sum += local_sum;
  } 


  printf("serie de taylor = %Lf\n", sum);
}
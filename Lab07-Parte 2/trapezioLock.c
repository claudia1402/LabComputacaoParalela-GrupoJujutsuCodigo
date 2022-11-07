#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Trap(double a, double b, int n, double *global_result_p, omp_lock_t lock);

double f(double x) {
	return exp(x);
}

int main(int argc, char *argv[]) {
  //O tipo omp_lock_t representa um bloqueio simples e futuramente irão requerir um argumento que seja um ponteiro para uma variável do tipo omp_lock_t.
  omp_lock_t lock;
  double global_result = 0.0;
  double a, b;
  int n;
  int thread_count;

  thread_count = strtol(argv[1], NULL, 10);
  printf("Enter a,b, and n\n");
  scanf("%lf %lf %d", &a, &b, &n);

#pragma omp parallel num_threads(thread_count)
  Trap(a, b, n, &global_result, lock);

  printf("With n = %d trapezoids, our estimate\n", n);
  printf("of the integral from %f to %f = %.14e\n", a, b, global_result);
  return 0;
}

void Trap(double a, double b, int n, double *global_result_p, omp_lock_t lock) {
  omp_init_lock(&lock);
  double h, x, my_result;
  double local_a, local_b;
  int i, local_n;
  int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();

  h = (b - a) / n;
  local_n = n / thread_count;
  local_a = a + my_rank * local_n * h;
  local_b = local_a + local_n * h;
  my_result = (f(local_a) + f(local_b)) / 2.0;
  for (i = 1; i <= local_n - 1; i++) {
    x = local_a + i * h;
    my_result += f(x);
  }
  my_result += f(x);

  //Forma de fornecer um meio de definir um bloqueio OpenMP. O comportamento é como se a instreução estivesse suspensa até que o bloqueio possa ser definido por essa tarefa.
  omp_set_lock(&lock);
  *global_result_p += my_result;
  //Meio de retirar a suspensão de um bloqueio OpenMP.
  omp_unset_lock(&lock);
}
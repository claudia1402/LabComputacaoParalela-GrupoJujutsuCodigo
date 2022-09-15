#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
# define m 6
# define n 6
# define t 3
int thread_count;
int A[m][n] = {{0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}};
int x[n] = {0,1,2,3,4,5};
int y[m];

void *MultiplyThreads(void* rank) {

    long my_rank = (long) rank;
 
    int i,j;
  
    int local_m = m/thread_count;
  
    int my_first_row = my_rank*local_m;

    int my_last_row = (my_rank + 1)*local_m - 1;

    for (i = my_first_row; i <= my_last_row; i++) {
        y[i] = 0.0;
        for (j = 0; j < n; j++) {
            y[i] += A[i][j]*x[j];
        }
    }
    return NULL;
}



int main(int argc, char* argv[]) {
    long thread;
    pthread_t thread_handles[t];

    thread_count = strtol(argv[1], NULL, 10);

    for (thread = 0; thread < t; thread++) {
        pthread_create(&thread_handles[thread], NULL, MultiplyThreads, (void *)thread);

    }

    for (thread = 0; thread < t; thread++) {
        pthread_join(thread_handles[thread], NULL);
    }

    for (int i = 0; i < m; i++) {
        printf("posicao %d: %d\t",i,y[i]);
    }
	printf("\n");
	pthread_exit(NULL);
    return 0;
}
Código
#include <pthread.h> → Uma biblioteca que nos permite criar e manipular threads, denominado POSIX, as bibliotecas que implementam o POSIX são chamadas de Pthreads, e são utilizadas em sistemas do tipo Linux,Solaris e Windows.
thread_count = strtol(argv[1], NULL, 10) → Retorna o número de threads em execução, sendo a função “strtol” responsável por converter a parte inicial da string em str para um valor long int de acordo com a base fornecida.
void* MultiplyThreads(void* rank) → função iniciada por pthread_create para salvar etapas da multiplicação entre matriz e vetor em threads. void* thread_function ( void* args_p ); , sendo que args_p pode apontar para uma lista contendo um ou mais valores necessários para thread_function.
long my_rank = (long) rank → Método pthreads para a regra trapezoidal usando mutex. long my_rank = (long)rank.
pthread_t thread_handles[t] → Criamos uma matriz de objetos pthread_t para armazenar todas as threads que criamos. Thread handle é usado pelo sistema operacional que identifica processos e threads, os usuários podem usar o handle para identificar processos e threads e operar neles.
pthread_create(&thread_handles[thread], NULL, MultiplyThreads, (void *)thread) → Cria uma nova thread dentro de um processo. Como o atributo attr é NULL, os atributos padrão serão usados. pthread_create(pthread_t *thread, pthread_attr_t attr, void *(*start_routine) (void *arg), void *arg.
pthread_join(thread_handles[thread], NULL → espera pela thread especificada por thread para terminar. Se esse encadeamento já foi encerrado, então pthread_join() retorna imediatamente (int pthread_join(pthread_t thread, void **retval);)
pthread_exit(NULL) → Termina o thread de chamad e torna o valor value_ptr disponível para qualquer junção bem-sucedida com o thread de término.
Execução
Foi realizado o download do wsl e ambiente linux nas máquinas Windows para execução deste programa. Em seguida, foi utilizado no Powershell o comando gcc -pthread Lab06.c -o Lab06. Por fim, ./Lab06 3, onde 3 é o número de Threads (pode ser um valor diferente de 3).

image

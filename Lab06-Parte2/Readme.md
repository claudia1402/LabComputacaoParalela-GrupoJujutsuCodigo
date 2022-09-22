### Código


- ` include <pthread.h>` → Uma biblioteca que nos permite criar e manipular threads, denominado POSIX. As bibliotecas que implementam o POSIX são chamadas de Pthreads, e são utilizadas em sistemas do tipo Linux, Solaris e Windows.
- `void *Thread_PiAprox(void *rank)` →  Função de cálculo aproximado de Pi.
- `(int argc , char *argv[])` →  `argc`tem tipo int e indica a quantidade de argumentos que foram passados ao chamar-la e `argv[]`por sua vez possui tipo char e tem a função de conter os argumentos, um para cada string passada.
- - Onde `if` `argc` < 3 ` N` = 2000 e ` num_thread` = 10 ou seja os valores de `argc` implicam ativamente no `N` de Threads.
- ` malloc(num_thread*sizeof(pthread_t))`  →  `malloc` Aloca na memória o número de Threads. O operador `sizeof` fornece a quantidade de armazenamento, em bytes, necessária para armazenar o objeto que no caso foi o `thread_handless`, do tipo `pthread_t`.
- - `pthread_create`, onde foi criado uma nova Thread e `pthread_join`, que por sua vez foi realizado um "Join" entre as Threads.
-  `long long my_last_i = my_first_i + my_n;`  → Foi setado mais de um valor onde o ` my_last_i` será a posição inicial (`my_first_i`) adicionado ao número de Threads
- - `long long` Um tipo de variável inteira , permitindo uma gama maior de valores possíveis do que uma variável `long`. Onde foi setado os valores `my_last_i` e `my_first_i`.

### Execução

- Foi realizado o download do wsl e ambiente linux nas máquinas Windows para execução deste programa. Em seguida, foi utilizado no Powershell o comando `gcc -pthread Lab06-Parte2.c -o Lab06-Parte2.c`. Por fim, `./Lab06-Parte 2`.
- Caso 1: valores padronizados de número de threads e tamanho do vetor argv[]
>![image](https://user-images.githubusercontent.com/83611462/191629161-bb4bb1f7-1696-4764-95b6-96a21d4b0a74.png)
- Caso 2: valores do número de threads e tamanho do vetor argv[] são inseridos pelo usuário
>![image](https://user-images.githubusercontent.com/83611462/191629171-6b1f0fc4-d1e3-41b1-9fc3-c5104d2358dd.png)





### Código


- ` include <pthread.h>` → Uma biblioteca que nos permite criar e manipular threads, denominado POSIX, as bibliotecas que implementam o POSIX são chamadas de Pthreads, e são utilizadas em sistemas do tipo Linux,Solaris e Windows.
- `void *Thread_PiAprox(void *rank)` →  Foi passado o argumento do número `*Thread_PiAprox` e `rank`por sua vez oque cada Thread faz.
- `(int argc , char *argv[])` →  `argc`tem tipo int e indica a quantidade de argumentos que foram passados ao chamar-la e `argv[]`por sua vez possui tipo char e tem a função de conter os argumentos, um para cada string passada.
-- Onde `if` `argc` < 3 ` N` = 2000 e ` num_thread` = 10 ou seja os valores de `argc` implicam ativamente no `N` de Threads
- ` malloc(num_thread*sizeof(pthread_t))`  →  `malloc` Aloca na memória o número de Threads, O operador `sizeof` fornece a quantidade de armazenamento, em bytes, necessária para armazenar o objeto que no caso foi o `pthread_t`
- - `pthread_create` Onde foi criado uma nova Thread e `pthread_join` Onde por sua vez foi realizado um "Join" entre as Threads.
-  `long long my_last_i = my_first_i + my_n;`  → Foi setado mais de um valor onde on ` my_last_i` vai ser a  posição inicial (` my_first_i`) adicionado ao número de Threads
- - `long long` Um tipo de variável inteira , permitindo uma gama maior de valores possíveis do que uma variável `long`. Onde foi setado os valores `my_last_i` e `my_first_i`

### Execução

- Foi realizado o download do wsl e ambiente linux nas máquinas Windows para execução deste programa. Em seguida, foi utilizado no Powershell o comando `gcc -pthread Lab06-Parte2.c` `-o Lab06-Parte2.c` Por fim, `./Lab06-Parte 2`.
- Onde N foi o número de threads que, por sua vez foi variando com um delta = 5000.




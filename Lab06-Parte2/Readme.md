### Código
- `void *Thread_PiAprox(void *rank)` 
- `(int argc , char *argv[])`
- ` malloc(num_thread*sizeof(pthread_t))` `malloc` Aloca na memória o número de Threads, O operador `sizeof` fornece a quantidade de armazenamento, em bytes, necessária para armazenar o objeto que no caso foi o `pthread_t`
- - `pthread_create` Onde foi criado uma nova Thread e `pthread_join` Onde por sua vez foi realizado um "Join" entre as Threads.
-  `long long my_last_i = my_first_i + my_n;`
### Execução
- Foi realizado o download do wsl e ambiente linux nas máquinas Windows para execução deste programa. Em seguida, foi utilizado no Powershell o comando `gcc -pthread Lab06-Parte2.c` `-o Lab06-Parte2.c` Por fim, `./Lab06-Parte 2`.
- Onde N foi o número de threads que, por sua vez foi variando com um delta = 5000.



## Código

- `shmget` : retorna um identificador de memória compartilhada associada com uma Key específica;
- `shmat` : asssocia esse mesmo segmento a um elemento que, em nosso caso, foi uma variável;
- `pid_t` : representa o Id do processo; 
- `fork` por sua vez cria um novo processo, o processo filho. No momento em que o `pid_t` possua valor igual 0 está relacionado ao processo filho atual. Caso contrário, está relacionado ao processo pai.

### `shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0600)`
- `IPC_ PRIVATE` : Representa a Key de acesso associada;
- `1024` : tamanho de segmento de memória, neste caso para o tipo Int;
- `IPC_CREAT ou 0600` : foi utilizado para definir os direitos de acesso para o respectivo segmento de memória. O octal 0600 atribui tanto o direito de escrever quanto o de ler o segmento em questão. 
### `(int*)shmat(segMemoriaComp, NULL, 0)` 
- `segMemoriaComp` : identificador do segmento de memória compartilhada;
- `NULL` : ponteiro especificando o endereço de união;
- `0` : conjunto de flags.

## Execução
Foi realizado o download do wsl e ambiente linux nas máquinas Windows para execução deste programa. Em seguida, foi utilizado o comando `gcc Lab04.c -o Lab04` no PowerShell para criação de um arquivo executável. Para rodar o arquivo exercutável, foi utilizado o comando `./Lab04`.

> ![image](https://user-images.githubusercontent.com/74517849/189026612-345baf58-9db8-45bf-b1ce-d1182f7f8e14.png)

- Primeiro foi lido o valor inicial da váriavel compartilhada;
- Em segundo foi lido o valor do id do processo pai, que sempre muda ao ser executado, já que possui um valor aleatório maior que 0;
- Em segundo foi lido o valor do id do processo filho, que sempre possui valor igual a 0;
- Ao estar no processo filho, imprimiu a operação realizada de adicionar 2 ao valor da váriavel compartilhada, alterando para 3;
- Ao estar no processo pai, imprimiu a operação realizada de multiplicar 4 ao valor da váriavel compartilhada, alterando para 12.



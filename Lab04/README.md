Execução
Foi realizado o download do wsl e ambiente linux nas máquinas Windows para execução deste programa. 
`shmget` ele retorna um identificador de memoria comparilhada associada com uma Key especifica e o `shmat` asssocia esse mesmo segmento a um elemento que em nosso caso foi uma variavel, `pid_t` representa o Id do processo, `fork` por sua vez cria um novo processo, o processo filho.
 `shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0600)` `IPC_ PRIVATE` Representa a Key de acesso associada e 1024 o seu tamanho de segmento de memoria `IPC_CREAT` ou 0600 foi utilizado para definir os direitos de acesso para o respectivo segmento de memoria. 0600 da ambos o direito de escrever e ler o segmento em questao. `shmat` `(int*)shmat(segMemoriaComp, NULL, 0);
  *variavel = 1` o primeiro parametro e segmento de memoria compartilhada unido com o segmento de dados do processo, o segundo especifica o endereço da uniao e por fim um conjunto de flags.
Ao criar o `fork` quando o childpid possua valor igual 0 esta relacionado ao processo filho caso contrario esta relacionado ao processo pai.

Lab04fonte.c
O arquivo Lab02fonte.c é a versão inserida pelo professor a respeito do Fatorial de um número. Porém, ao medirmos o tempo de execução, o tempo em que o usuário demora para digitar o valor do fatorial é contabilizado, e dessa forma não ficaria equivalente ao tempo do programa sem interferências externas. Pensando nisso, inserimos os parâmetros int argc , char *argv[] na main e trabalhamos com eles ao longo do código.

Lab04.c
O arquivo Lab02.cfoi a versão que desenvolvemos, utilizando o comando fork() durante o processo pai para a criação do processo filho. Para a regulação das atividades dos processos de forma paralela, foi utilizado um número do processo de nome pid, evitando a interferência entre as atividades de cada etapa.

Conclusões
Ao calcular o tempo de execução dos códigos, chegamos aos seguintes resultados:

Versão serial
unknown

Versão multiprocessada
unknown

É possível observar que o tempo é o mesmo para ambas as execuções. Isso se deve ao processo possuir dependência nas operações em loop, algo que não conseguimos tornar totalmente paralelo até o momento atual, possivelmente atrelado a restrição quanto ao uso de threads.

## Execução
Foi realizado o download do wsl e ambiente linux nas máquinas Windows para execução deste programa. Em seguida, foi utilizado o comando `gcc lab02.c -o lab02` no *PowerShell*. Para simular o tempo de execução dos programas, utilizou-se o comando `time ./lab02 5`, sendo que o valor 5 foi inserido como argumento para realizar o cálculo de seu fatorial.

## Lab02fonte.c
O arquivo `Lab02fonte.c` é a versão inserida pelo professor a respeito do Fatorial de um número. Porém, ao medirmos o tempo de execução, o tempo em que o usuário demora para digitar o valor do fatorial é contabilizado, e dessa forma não ficaria equivalente ao tempo do programa sem interferências externas. Pensando nisso, inserimos os parâmetros `int argc , char *argv[]` na main e trabalhamos com eles ao longo do código.

## Lab02.c
O arquivo `Lab02.c`foi a versão que desenvolvemos, utilizando o comando `fork()` durante o processo pai para a criação do processo filho. Para a regulação das atividades dos processos de forma paralela, foi utilizado um número do processo de nome `pid`, evitando a interferência entre as atividades de cada etapa.

## Conclusões
Ao calcular o tempo de execução dos códigos, chegamos aos seguintes resultados:
### Versão serial
![unknown](https://user-images.githubusercontent.com/74517849/187821165-c0624e00-7f77-48bc-ac83-74af69424d4c.png)

### Versão multiprocessada 
![unknown](https://user-images.githubusercontent.com/74517849/187821188-0b2288cb-ca76-414b-bffa-b2dfea8ec448.png)

É possível observar que o tempo é o mesmo para ambas as execuções. Isso se deve ao processo possuir dependência nas operações em loop, algo que não conseguimos tornar totalmente paralelo até o momento atual,  possivelmente atrelado a restrição quanto ao uso de *threads*. 

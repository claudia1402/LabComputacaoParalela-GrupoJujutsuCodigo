## Explicação 
- Neste laboratório, contruido uma versão paralela com `OpenMP` e` critical`. A partir disso, utilizamos `#pragma omp critical` e  (que ocasiona na utilização de 
### omp `critical`
Esta versão consiste de uma realizada em Laboratório anterior. Caso queira analisar o código, basta acessar o [LabV1Serial](https://github.com/claudia1402/LabComputacaoParalela-GrupoJujutsuCodigo/tree/main/ProjV1Serial). porém paralelizada de um novo modo utilizando `OpenMP` e `Critical`

## Execução em instâncias com 1 e 2 processadores
- Foi instalado na máquina AWS o git e gcc. [Como Instalar GCC no Ubuntu](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/);
- Ao gerar a chave SSH no AWS, linkamos a chave com o Github para poder clonar o repositório;
- Foi realizado um Git clone na máquina AWS;
- A partir disso, para executar o código, foi utilizado os comandos `gcc trapezioLock.c -o trapezioLock -fopenmp -lm`
- Por fim, após estes comandos há a chamada do arquivo de execução com `./ProjV3`

## Limitações
- Até o momento de desenvolvimento deste projeto, a AWS Learner Lab não nos permitiu criar instâncias com mais de 2 núcleos. Dessa forma, ficamos limitados a comparar o tempo de execução dos programas apenas com 1 processador e 2 processadores, sendo que foi pedido uma comparação de tempo de execução com 1, 2, 4  e 8 processadores para a versão paralela, portanto fizemos a execução com 1 e 2 processadores e 5, 10 e 15 _threads_
- Ademais, nosso código requisitava a entrada de informações por parte do usuário, sendo que esse fator pode ter afetado os resultados do tempo de speedup, para contornarmos esse imprevisto criamos _3_ versões com _3_ quantidades diferentes de _threads_. Entre eles: _5 Threads_, _10 Threads_ e _15 Threads_ onde apenas alteramos o número de _Threads_ no programa
## Prints de Execução

### 1 Processador e 5 Threads

### 1 Processador e 10 Threads

### 1 Processador e 15 Threads

### 2 Processador e 5 Threads

### 2 Processador e 10 Threads

### 2 Processador e 15 Threads

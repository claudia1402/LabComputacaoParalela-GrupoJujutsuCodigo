## Explicação 
- Neste laboratório, foi pedido a construção de duas versões paralelas com OpenMP. A partir disso, utilizamos `#pragma omp critical` e `omp_lock_t` (que ocasiona na utilização de `omp_set_lock` e `omp_unset_lock`).
### omp critical
Esta versão foi realizada no Laboratório anterior. Caso queira analisar o código, basta acessar o [Lab07-Parte 1](https://github.com/claudia1402/LabComputacaoParalela-GrupoJujutsuCodigo/tree/main/Lab07-Parte%201).
### omp lock
- ...
- ...
- ...
- ...


## Execução em instâncias com 1 e 2 processadores
- Foi instalado na máquina AWS o git e gcc. [Como Instalar GCC no Ubuntu](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/);
- Ao gerar a chave SSH no AWS, linkamos a chave com o Github para poder clonar o repositório;
- Foi realizado um Git clone na máquina AWS;
- A partir disso, para executar o código, foi utilizado os comandos `gcc trapezioLock.c -o trapezioLock -fopenmp -lm`
- Por fim, após estes comandos há a chamada do arquivo de execução com `./trapezioLock 10` para 10 Threads, e `./trapezioLock 5` para 5 Threads;

## Limitações
- Até o momento de desenvolvimento deste projeto, a AWS Learner Lab não nos permitiu criar instâncias com mais de 2 núcleos. Dessa forma, ficamos limitados a comparar o tempo de execução dos programas apenas com 1 processador e 2 processadores, sendo que foi pedido uma comparação de tempo de execução com 1, 2, 4  e 8 processadores para a versão paralela.


## Explicação 
- Neste laboratório, foi pedido a construção de duas versões paralelas com OpenMP. A partir disso, utilizamos `#pragma omp critical` e `omp_lock_t` (que ocasiona na utilização de `omp_set_lock` e `omp_unset_lock`).
### omp critical
Esta versão foi realizada no Laboratório anterior. Caso queira analisar o código, basta acessar o [Lab07-Parte 1](https://github.com/claudia1402/LabComputacaoParalela-GrupoJujutsuCodigo/tree/main/Lab07-Parte%201).
### omp lock
- `omp_lock_t`: representa um bloqueio simples. Futuramente, será necessário um argumento que seja um ponteiro para uma variável do tipo omp_lock_t.
- `omp_set_lock`: fornece um meio de definir um bloqueio OpenMP. O bloco de código terá o comportamento suspenso até que o bloqueio possa ser definido por essa tarefa.
- `omp_unset_lock`: fornece meios de desarmar um bloqueio OpenMP.
- Documentação do OpenMP para Lock: [OPENMP API Specification - Lock Routines](https://www.openmp.org/spec-html/5.0/openmpse31.html)


## Execução em instâncias com 1 e 2 processadores
- Foi instalado na máquina AWS o git e gcc. [Como Instalar GCC no Ubuntu](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/);
- Ao gerar a chave SSH no AWS, linkamos a chave com o Github para poder clonar o repositório;
- Foi realizado um Git clone na máquina AWS;
- A partir disso, para executar o código, foi utilizado os comandos `gcc trapezioLock.c -o trapezioLock -fopenmp -lm`
- Por fim, após estes comandos há a chamada do arquivo de execução com `./trapezioLock 10` para 10 Threads, e `./trapezioLock 5` para 5 Threads;

## Limitações
- Até o momento de desenvolvimento deste projeto, a AWS Learner Lab não nos permitiu criar instâncias com mais de 2 núcleos. Dessa forma, ficamos limitados a comparar o tempo de execução dos programas apenas com 1 processador e 2 processadores, sendo que foi pedido uma comparação de tempo de execução com 1, 2, 4  e 8 processadores para a versão paralela.
- Ademais, nosso código requisitava a entrada de informações por parte do usuário, sendo que esse fator pode ter afetado os resultados do tempo de speedup. 

## Prints de Execução

CRITICAL – 1 NÚCLEO 5 THREADS
 ![image](https://user-images.githubusercontent.com/74517849/200223969-f5c847e9-97c8-4a67-9282-d55b072d447d.png)

CRITICAL – 1 NÚCLEO 10 THREADS
 ![image](https://user-images.githubusercontent.com/74517849/200223991-5a41e4a6-f022-4160-9ff7-9c11214239fa.png)

CRITICAL – 2 NÚCLEOS 5 THREADS
 ![image](https://user-images.githubusercontent.com/74517849/200223846-19549d38-f0fd-46bd-bc4c-0e8f1f8e5924.png)

CRITICAL – 2 NÚCLEOS 10 THREADS
![image](https://user-images.githubusercontent.com/74517849/200223929-635beabf-e7bf-4509-98ca-d056e03cb6ea.png)

___

LOCK – 1 NÚCLEO 5 THREADS
 ![image](https://user-images.githubusercontent.com/74517849/200224080-3e3b37fd-b074-4f53-869e-3297381129f7.png)

LOCK – 1 NÚCLEO 10 THREADS
 ![image](https://user-images.githubusercontent.com/74517849/200224090-23bf133f-03fd-4c12-a9ea-dc367e21721b.png)

LOCK – 2 NÚCLEOS 5 THREADS
 ![image](https://user-images.githubusercontent.com/74517849/200224060-b8ed3b00-e39f-4b36-8a82-acc1f7c38bd1.png)

LOCK – 2 NÚCLEOS 10 THREADS
 ![image](https://user-images.githubusercontent.com/74517849/200224066-edbacdd8-0da7-41b0-9911-c87e10326375.png)

## Gráfico de Comparação
![image](https://user-images.githubusercontent.com/74517849/200227904-8ae69b8a-0a85-4122-b5a2-daf64fa87dfc.png)


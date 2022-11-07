## Código
- Os comandos `#pragma omp parallel num_threads(thread_count)` e `#pragma omp critical` é responsável por criar uma região paralela e para os threads dessa região as iterações do loop que ela inclui serão atribuídas, usando o tamanho e a programação padrão do bloco.

## Explicação 
- O código aplica a solução da regra do trapézio, inserindo dois valores para o cálculo da integral e o número total de trapézios presentes, retornando o resultado aproximado da área do gráfico.


## Execução
- Foi instalado na máquina AWS o git e gcc Como Instalar GCC no Ubuntu;
- Ao gerar a chave SSH no AWS, linkamos a chave com o Github para poder clonar o repositório;
- Foi realizado um Git clone na máquina AWS;
- A partir disso, para executar o código, foi utilizado os comandos `gcc Lab07.c -o Lab07 -openmp -lm`
- Por fim, após estes comandos há a chamada do arquivo de execução com `./Lab07 10`, sendo 10 o número de threads;

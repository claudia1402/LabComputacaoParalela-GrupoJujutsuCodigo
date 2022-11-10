## Explicação 
- Neste laboratório, contruímos uma versão paralela com `OpenMP` e` critical`. A partir disso, foi incluso o `omp.h` para permitir o uso dos recursos da biblioteca omp.
- `for(int i = 1; i <= c; i++) {fatorial *= i;` criamos a lógica da função fatorial, que será utilizada mais para fente pela série de Taylor.
- `const int N=10000; ` Utilizamos essa variável estática para chamarmos o N que foi o máximo atingido com o poder computacional em mãos 
- `long double local_sum` Assim alocamos a soma local com mais espaço na memória por usar uma variável do tipo long double
- `#pragma omp set_num_threads(10)` Onde esse valor 10 se refere ao número escolhido de _Threads_
- `#pragma omp parallel private(local_sum) shared(sum) ` para paralelizarmos a soma, associando uma memória privada a variável `local_sum`, que mais para frente tem os valores finais inseridos na memória compartilhada associada a variável `sum`.
- Por fim em `pragma omp for`, no laço `for (int i = 0; i <= N; i++)` e `local_sum += 1/calculoFatorial(i)` a soma incrementa, resultando na soma das frações da série de Taylor.

### omp `critical`
Esta versão consiste de uma realizada em Laboratório anterior. Caso queira analisar o código, basta acessar o [LabV1Serial](https://github.com/claudia1402/LabComputacaoParalela-GrupoJujutsuCodigo/tree/main/ProjV1Serial). porém paralelizada de um novo modo utilizando `OpenMP` e `Critical`

## Execução em instâncias com 1 e 2 processadores
- Foi instalado na máquina AWS o git e gcc. [Como Instalar GCC no Ubuntu](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/);
- Ao gerar a chave SSH no AWS, linkamos a chave com o Github para poder clonar o repositório;
- Foi realizado um Git clone na máquina AWS;
- A partir disso, para executar o código, foi utilizado os comandos `gcc ProjV3.c -o ProjV3 -fopenmp`
- Por fim, após estes comandos há a chamada do arquivo de execução e seu speedup com `time ./ProjV3`

## Limitações
- Até o momento de desenvolvimento deste projeto, a AWS Learner Lab não nos permitiu criar instâncias com mais de 2 núcleos. Dessa forma, ficamos limitados a comparar o tempo de execução dos programas apenas com 1 processador e 2 processadores, sendo que foi pedido uma comparação de tempo de execução com 1, 2, 4  e 8 processadores para a versão paralela, portanto fizemos a execução com 1 e 2 processadores e 5, 10 e 15 _threads_
- Ademais, nosso código requisitava a entrada de informações por parte do usuário, sendo que esse fator pode ter afetado os resultados do tempo de speedup, para contornarmos esse imprevisto criamos _3_ versões com _3_ quantidades diferentes de _threads_. Entre eles: _5 Threads_, _10 Threads_ e _15 Threads_ onde apenas alteramos o número de _Threads_ no programa
## Prints de Execução

### 1 Processador e 5 Threads
![image](https://user-images.githubusercontent.com/80297158/200951298-a95cb6f5-281a-41e8-8e62-b1a0cd55a5c4.png)

### 1 Processador e 10 Threads
![image](https://user-images.githubusercontent.com/80297158/200951371-5db40a5a-f15a-42ce-92e6-15423271e4d1.png)

### 1 Processador e 15 Threads
![image](https://user-images.githubusercontent.com/80297158/200951472-2e95b2bf-08ca-4b01-a92c-52c8ae6314d5.png)

### 2 Processador e 5 Threads
![image](https://user-images.githubusercontent.com/80297158/200951035-b02d1d0d-c5e4-4fcb-8fce-7b5b06e2d11b.png)

### 2 Processador e 10 Threads
![image](https://user-images.githubusercontent.com/80297158/200950895-9a25555b-aac8-45bb-95b8-dcf4f8e71523.png)

### 2 Processador e 15 Threads
![image](https://user-images.githubusercontent.com/80297158/200950742-acc73ef9-a59b-45f8-9710-93dda278822a.png)


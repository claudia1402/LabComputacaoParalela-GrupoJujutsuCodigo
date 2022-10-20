## Código
- O código do [ProjV1Serial](https://github.com/claudia1402/LabComputacaoParalela-GrupoJujutsuCodigo/tree/main/ProjV1Serial) foi utilizado como base para implementação paralela do programa. A partir disso, a paralelização foi realizada utilizando PThreads, auxiliada pelo `include` de sua respectiva biblioteca. O valor S da Série de Taylor é encontrado, dado um tempo de valor _1.000.000_, representado pela variável `n`, como proposto pelo enunciado. 
- incluimos as seguintes bibliotecas:`<stdio.h>` , `<stdlib.h>` e `<pthread.h>` para a realizar o script. Basta inserir `#include` antes da biblioteca que deseja;
- Utilizamos `long double` para poder armazenar mais variáveis do tipo Double; 
- Utilizamos `long int` para poder armazenar mais variáveis do tipo Int;
- `int i = my_first_i; i <= my_last_i; i++` para aumentar gradativamente o valor do contador criado.

## Explicação Teórica do Projeto V2
O código consiste na criação de um programa capaz de executar a Série de Taylor utilizando conceitos da Computação Paralela, em que são definidos valores iniciais para o tempo máximo que a tartaruga conseguirá percorrer de acordo com a fórmula _1/0! + 1/1! + 1/2! + 1/3!... 1/N!_. Os demais denominadores aumentam seu valor fatorial gradativamente. Detalhes do código estão explicados através de comentários, para facilitar a interpretação e entendimento.

### Algumas Dificuldades Encontradas:
- `Core Dumped`: por se tratar de um valor muito grande, a capacidade computacional da lógica aplicada não suportou a execução, ocasionando num estouro de memória;
- AWS apresentou instabilidades no servidor, dificultando o processo de compilação e execução do código. 
![image](https://user-images.githubusercontent.com/83611462/196848592-c049c8b4-4010-4b11-8756-a8ba6904557a.png)

## Execução
- Foi instalado na máquina AWS o `git` e `gcc` [Como Instalar GCC no Ubuntu](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/);
- Ao gerar a chave SSH no AWS, linkamos a chave com o Github para poder clonar o repositório;
- Foi realizado um Git clone na máquina AWS;
- A partir disso, para executar o código, foi utilizado os comandos `gcc projV2.c -o projV2`.
- Por fim, após estes comandos há a chamada do arquivo de execuçao com `./projV2`
![image](https://user-images.githubusercontent.com/80297158/196845239-f89f9cae-dcdd-4703-a270-6c1839d908aa.png)

### SpeedUp
- Em relação ao speed up da versão paralela, não foi possível calculá-lo devido ao core dumped mencionado anteriormente. Porém, é possível estimar a eficiência da versão paralela seria superior a versão serial, devido a paralelização das expressões fracionárias.
- Para realizar o cálculo do speedup, na chamada do arquivo de execução, deve-se inserir o comando `time` no shell `time ./projV2`.
- Aqui está um exemplo do cálculo do speedup da versão serial do código:
![image](https://user-images.githubusercontent.com/80297158/196845408-a5b04a10-81c8-404f-9dcf-907fae6a02cd.png)

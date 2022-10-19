## Código
- Desta vez mantivemos apenas a `main`, do [ProjV1Serial()] entretanto desta vez paralelizamos utilizando Threads, auxiliada pelo include de sua respectiva biblioteca, onde o valor S da Série de Taylor é encontrado, dado um tempo T. Já na `"feature/alternative-version"`, há a também a versão serial, onde o valor S da Série de Taylor é encontrado sem que um valor T seja dado, sendo este incrementado e limitado pela capacidade computacional do programa. Como limitação da versão alternativa, temos que o vetor responsável por armazenar os valores resultantes do incremento da variável de tempo, está estourando a capacidade de memória. Este problema provavelmente está relacionado com alguma falha estrutural de definição do limite do Loop.
- incluimos as seguintes bibliotecas:`<stdio.h>`, `<math.h>`, `<pthread.h>`para a realizar o script. apenas necessitando inserir o `#include` antes da biblioteca;
- Utilizamos a `long double` para poder armazenar mais variáveis do tipo Double; 
- Utilizamos a `long int` para poder armazenar mais variáveis do tipo Int;
- `int i = 1; i <= c; i++` para aumentar gradativamente o valor do contador criado;
- `soma` = `((pow(x, i))/calculoFatorial(i))`, onde a soma será igual potência de "x" e "i" sobre o calculoFatorial de i.
## Explicação Teórica do Projeto V2
O código consiste na criação de um programa capaz de executar a Série de Taylor, em que são definidos valores iniciais para o tempo máximo que a tartaruga conseguirá percorrer e o X que se refere ao valor inicial do númerador, setado como 1 para seguir de acordo com a fórmula apresentada no projeto onde a formula consiste em _1/1! + 1/2! + 1/3!... 1/N!_ Os demais desenvolvimentos do código estão explicados através de comentários, para facilitar a interpretação e entendimento.

## Execução
- Foi instalado na máquina AWS o `git` e `gcc` [Como Instalar GCC no Ubuntu](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/);
- Ao gerar a chave SSH no AWS, linkamos a chave com o Github para poder clonar o repositório;
- Foi realizado um Git clone na máquina AWS;
- A partir disso, para executar o código, foi utilizado os comandos `gcc projV1.c -o projV1 -lm`, visto que `-lm` é para a biblioteca `math`.


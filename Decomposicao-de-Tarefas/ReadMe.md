# Decomposição de Tarefas
### Considere o algoritmo desenvolvido para o projeto final e responda às seguintes perguntas:
### 1. Quais são as tarefas no caminho crítico para cada grafo de dependência? Para responder a pergunta, apresente um DAG do seu projeto.
_Para facilitar a visualização, a seção em laranja no DAG representa o caminho crítco e as respectivas tarefas._
![image](https://user-images.githubusercontent.com/83611462/197429574-14e33352-fce4-4a56-bef4-6132b94c13d2.png)

### 2. Qual é o limite inferior do tempo de execução paralela para cada decomposição?
O limite inferior é 2.
_Para facilitar a visualização, as setas na cor verde representam um caso do limite inferior._
![image](https://user-images.githubusercontent.com/83611462/197429315-606cfe23-669d-4ce5-b5c1-c4e5c91346fa.png)

### 3. Quantos processadores são necessários para se conseguir o tempo mínimo de execução?
Serão necessários 6 processadores para conseguir o tempo mínimo de execução.
![image](https://user-images.githubusercontent.com/83611462/197429870-7af0cb39-28ee-4fb9-bb7c-9212e7bbf0a4.png)

### 4. Qual é o grau máximo de concorrência?
O grau máximo de concorrência é 4. Uma vez que elas dependem entre elas para serem executadas, onde a _T4_ somente pode ser executada depois da _T3_ seguindo assim ate _T1_
![image](https://user-images.githubusercontent.com/80297158/197430916-4d5f9e59-2ec5-4d7c-86cc-599ec9f5f66d.png)



### 5. Qual o paralelismo médio?
O paralelismo médio será 3,34.
![image](https://user-images.githubusercontent.com/83611462/197430539-16f72397-d2c9-414a-a350-eb01e7850094.png)


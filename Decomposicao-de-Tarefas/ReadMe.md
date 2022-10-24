# Decomposição de Tarefas
### Considere o algoritmo desenvolvido para o projeto final e responda às seguintes perguntas:
### 1. Quais são as tarefas no caminho crítico para cada grafo de dependência? Para responder a pergunta, apresente um DAG do seu projeto.
_Para facilitar a visualização, a seção em lilás no DAG representa o caminho crítco e as respectivas tarefas._
No caso, as tarefas 1, 2, 3 e 4 são casos de caminho crítico, pois percorrem os maiores caminhos até o final da execução.

![image](https://user-images.githubusercontent.com/74517849/197431532-da25bc6f-aa10-4578-8732-0376642903ca.png)

### 2. Qual é o limite inferior do tempo de execução paralela para cada decomposição?
O limite inferior é 2. No caso, as tarefas 5 e 6 são casos em que se aplica.
_Para facilitar a visualização, as setas na cor verde representam um caso do limite inferior._

![image](https://user-images.githubusercontent.com/74517849/197432017-5abfa31b-b246-483e-9ff4-891df4a9d166.png)

### 3. Quantos processadores são necessários para se conseguir o tempo mínimo de execução?
Serão necessários 6 processadores para conseguir o tempo mínimo de execução, já que as tarefas de 1 a 6 são executadas paralelamente em _T1_.

![image](https://user-images.githubusercontent.com/74517849/197431672-61c31dbc-c938-4ca0-a1e7-e0670c422296.png)

### 4. Qual é o grau máximo de concorrência?
O grau máximo de concorrência é 4. Uma vez que as tarefas são dependentes entre si para serem executadas, onde a _T4_ somente pode ser executada depois da _T3_, seguindo assim até _T1_.

![image](https://user-images.githubusercontent.com/74517849/197432109-63ffe831-6162-40f8-a16a-9f7bb4672a86.png)



### 5. Qual o paralelismo médio?
O paralelismo médio será 3,34, sendo esse valor equivalente as somatórias do número de tarefas em _T1_ à _T3_, dividido por 3.

![image](https://user-images.githubusercontent.com/74517849/197431814-caca08a1-4de6-43ab-a404-3143905cec29.png)


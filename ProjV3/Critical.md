# Explicação 

### Utilização 
- `Critical`A diretiva omp critical identifica uma seção de código que deve ser executada por uma única thread por vez.

- Uma thread espera no início de uma região crítica identificada por um determinado nome até que nenhuma outra thread no programa esteja executando uma região crítica com esse mesmo nome. As seções críticas não especificamente nomeadas pela invocação da diretiva crítica omp são mapeadas para o mesmo nome não especificado.

### Sintaxe 

![image](https://user-images.githubusercontent.com/80297158/200960948-288b6886-4ec6-4c4e-8aa3-16f9d55697af.png)


- Onde o nome pode ser usado opcionalmente para identificar a região crítica. Identificadores que nomeiam uma região crítica têm ligação externa e ocupam um espaço de nomes distinto daquele usado por identificadores comuns.




# Comparações

## Tabela
![image](https://user-images.githubusercontent.com/80297158/200956233-4131a348-4b94-4210-838e-318422aab812.png)

## Gráficos

### Comparação entre Núcleos 
![image](https://user-images.githubusercontent.com/80297158/200955950-8567d483-8365-48d7-920a-568bef8ab408.png)
- Foi perceptível o esperado uma vez que o tempo de execução abaixou quando adicionamos mais núcleos, sendo mais onde 2 núcleos superam em velocidade 1 núcleo em todos os testes
### Variação entre Threads 
![image](https://user-images.githubusercontent.com/80297158/200956162-49a8f750-a7d6-401e-920b-a3f830073b8a.png)

- Como podemos perceber em 2 núcleos a variação entre as _Threads_ é mais acentuada que em apenas um núcleo onde o mesmo configura-se quase como uma linha constante, possuindo pouquíssima variação apenas perceptível 2 casas após a vírgula.

## Tempos médios 

### 1 Núcleo 

- 4.68 +
4.661 + 
4.679 = 14.02/3 = 4.67333333

### 2 Núcleos

- 3.717 +
4.065 +
3.92 = 11.702/3 = 3.90066667

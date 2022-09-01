### Execução
Foi realizado o download do wsl e ambiente linux nas máquinas Windows para execução deste programa. Em seguida, foi utilizado o comando **gcc lab02.c -o lab02**.

### Lab02fonte.c
O arquivo **Lab02fonte.c** é a versão inserida pelo professor a respeito do Fatorial de um número. Porém, ao medirmos o tempo de execução, o tempo em que o usuário demora para digitar o valor do fatorial é contabilizado, e dessa forma não ficaria equivalente ao tempo do programa sem interferências externas. Pensando nisso, inserimos os parâmetros *int argc , char *argv[]** na main e trabalhamos com eles ao longo do código.

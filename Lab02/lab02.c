//inclindo bibliotecas necessarias para execução do codigo
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>

//Em C, argc e argv são parâmetros comuns na main
int main(int argc , char *argv[])
{
  //numero do processo (indica se é pai ou filho)  
  pid_t pid;

  //por padrao, o argc é
  if (argc != 2)
  {
    printf("argumento faltando ou escedendo\n");
    exit(0);
  }
  
    // atoi convertendo string para int
    if ( atoi ( argv[1] ) <0 )
    {
        printf("numero negativo gerado %d", atoi(argv[1]));
        exit(0);
    }
  
    pid=fork();
  
    if ( pid<0 )
    {
        printf("Falha em criar a filha\n");
        exit(0);
    }
  
    else if ( pid==0 )
    {
        //processa o filho
        int ans = 0, i, k = 2, n;
  
        // atoi convertendo string para int
        n = atoi(argv[1]);
        int arr[n],sum[n];
  
        arr[0] = 1;

        //loop para realizar cálculo do fatorial
        for (i=0; n > 1; n = n -1) {
            arr[0] = arr[0]*n;
        }

      printf("O fatorial de %d e igual a %d\n",atoi(argv[1]),arr[0]);

      exit(0);
    }
  
    // processa o pai
    else
    {
        wait(NULL);
  
        // aguarda o ciclo do filho acabar
        printf("programa encerrado\n");
    }
}
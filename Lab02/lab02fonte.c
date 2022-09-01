# include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
   int i, j;
   j = atoi(argv[1]);

   for (i=1; j > 1; j = j -1) {
         i=i*j;
   }

   printf("The factorial of %d is %d\n",atoi(argv[1]),i);
}


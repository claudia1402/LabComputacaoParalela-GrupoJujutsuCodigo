#include<stdio.h>
#include<math.h>
 
//Define a funcao a ser integrada 
double f(double x){
  return x*x;
}
 
//Definir a funcao a ser integrada pelo metodo dos trapezios 
double trapezio(double f(double x), double a, double b, int n){
  double x,h,sum=0,integral;
  int i;
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*sum);
  return integral;
}
//Inicio
main(){
  int n,i=2;
  double a,b,h,eps,sum=0,integral,integral_new;
 
  //Pergunta ao usuario o input
  printf("\nInsira o limite inicial: ");
  scanf("%lf",&a);
  printf("\nInsira o Limite Final: ");
  scanf("%lf",&b);
  printf("\nInsira a precisao desejada: ");
  scanf("%lf",&eps);
  integral_new=trapezio(f,a,b,i);
 
  //Realiza a integracao pela regra do trapezio para um intervalo de 2 ou mais
  do{
    integral=integral_new;
    i++;
    integral_new=trapezio(f,a,b,i);
  }while(fabs(integral_new-integral)>=eps);
 
  //Imprime a resposta
  printf("A integral vai ser: %lf\n com exatamente %d intervalos",integral_new,i);
} 

//Fim

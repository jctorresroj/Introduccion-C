/*
  Calculo de las raices de una ecuacion cuadratica. Cuando son reales
 */

#include <stdio.h>
#include <math.h>

int main(){
  double a, b, c, raiz1, raiz2, d, a2;

  printf("\n Raices de a*x*x + b*x + c =0. \n\n");

  printf(" a = ");
  scanf("%lf", &a);
  
  printf(" b = ");
  scanf("%lf", &b);
  
  printf(" c = ");
  scanf("%lf", &c);

  printf("\n %lf x*x + %lf*x + %lf = 0\n\n",a,b,c);

  a2 = 2.0*a;
  d  = sqrt(b*b -4.0*a*c);
  raiz1 = (-b+d)/a2;
  raiz2 = (-b-d)/a2;

  printf("Raices: %12.4lf %15.6lf \n", raiz1, raiz2);
  return 0;
}

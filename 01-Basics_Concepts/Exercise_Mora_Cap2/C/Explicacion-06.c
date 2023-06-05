/*
  Conversiones de eXpresiones
 */

#include <stdio.h>
#include <math.h>

int main(){
  int     i = 8,j = 3;
  double  x = 1.5, u , z;

  u = i/j*x;
  z = i*x/j;
  
  printf("\n Se tienen las siguientes variables int i = 8, j =3, double x =1.5\n ");
  printf("\n El resultado de la operacion u = i/j*x, es u = %2.1lf",u);
  printf("\n El resultado de la operacion z = i*x/j, es z = %2.1lf \n\n",z);

  printf("Moldes");
  double y;
  i = 3;
  j = 4;
  //y = (double) i;
  y = j;
  printf("A continuacion se muestra la variable y = %2.1lf \n",y);
  return 0;
}

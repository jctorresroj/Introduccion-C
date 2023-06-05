/*
  Conversiones de eXpresiones
 */

#include <iostream>
#include <cmath>

int main(){
  int     i = 8,j = 3;
  double  x = 1.5, u , z;

  u = i/j*x;
  z = i*x/j;

  std::cout << "\n Se tienen las siguientes variables int i = 8, j =3, double x =1.5\n ";
  std::cout << "\n El resultado de la operacion u = i/j*x, es u = "<< u;
  std::cout << "\n El resultado de la operacion z = i*x/j, es z = "<< z;

  std::cout << "\n\n Moldes \n\n";
  double y;
  i = 3;
  j = 4;
  //y = (double) i;
  y = j;
  std::cout << "A continuacion se muestra la variable y =" <<y <<"\n";
  return 0;
}

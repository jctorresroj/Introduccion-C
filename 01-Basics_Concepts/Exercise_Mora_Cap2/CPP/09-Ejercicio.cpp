/*
  Dadas las longitudes  de los lados de un triangulo, calcule su area.
*/

#include <iostream>
#include <cmath>

int main(){
  std::cout << "If you know the three side of a triangle. Can you calculate the area? \n";

  // Se tiene los siguientes 3 lados de una triangulo.
  
  double a = 0, b = 0 , c = 0, p =0, area =0;

  //                                  Formula de Heron
  //
  // Si se conocen los 3 lados de un triangulo, entonces la formula encontrar el area es
  // A = \sqrt(p(p-a)(p-b)(p-c))
  // Donde p es el semi-perimetro del triangulo
  // p = (a+b+c)/2

  std::cout << "Please introduce the value of each side of triangle a , b and c \n";
  std::cin  >> a >> b>> c;
  std::cout << "The values are a=" << a << " ,b=" << b << " ,c=" << c <<"\n";
  
  p    = 0.5*(a+b+c);
  area = sqrt(p*(p-a)*(p-b)*(p-c));

  std::cout<<"With this values, area is:" << area << "\n";
  
  
  return 0;
}

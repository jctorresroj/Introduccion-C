/*
  Calculo de las raices de una ecuacion cuadratica. Cuando son reales
 */

#include <iostream>
#include <cmath>

int main(){
  double a, b, c, raiz1, raiz2, d, a2;

  std::cout<<"\n Raices de a*x*x + b*x + c =0. \n";
  
  std::cout<< "a = ";
  std::cin >>a;
  
  std::cout<<"b = ";
  std::cin >> b;
	      
  std::cout<<" c = ";
  std::cin >> c;

  std::cout<<"\n" <<a <<" x*x +"<< b <<"*x +"<< c<<"= 0\n\n";

  a2 = 2.0*a;
  d  = sqrt(b*b -4.0*a*c);
  raiz1 = (-b+d)/a2;
  raiz2 = (-b-d)/a2;

  std::cout <<"Raices:" <<raiz1 <<"\t"<<raiz2 <<"\n\n";
  return 0;
}

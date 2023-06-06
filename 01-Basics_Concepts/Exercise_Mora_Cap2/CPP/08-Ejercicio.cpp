/*
  Dadas las longitudes de los lados de un triangulo, calcule, en grados los angulos
 */

#include <iostream>
#include <cmath>

int main(){
  std::cout << "With the three side longitude of triangule, Can you find the three\n";
  std::cout << "angules?(in grades)\n";
  // Utilizando el teorema del Coseno
  // Sean a, b, c los lados de una triangulo
  //  a^2 = b^2 + c^2 -2bccos(alpha)

  float a = 0, b=0, c=0, alpha =0, beta=0, gamma=0; 
  float conversion = 180/3.1416;
  std::cout << "Introduce de three side logitude a, b,c \n";
  std::cin  >> a >>b >>c;
  std::cout << "The valuores are:a = "<< a << ", b = "<< b<<",c ="<<c <<"\n";

  // caso alpha
  float alpha_numerador= 0, alpha_denominador= 0;
  alpha_numerador   =  a*a - b*b - c*c ;
  alpha_denominador = -2*c*b;
  alpha             = conversion*acos(alpha_numerador/alpha_denominador);

  // caso beta
  float beta_numerador= 0, beta_denominador= 0;
  beta_numerador   =  b*b - a*a - c*c ;
  beta_denominador = -2*c*a;
  beta             = conversion*acos(beta_numerador/beta_denominador);

  // caso gamma
  float gamma_numerador= 0, gamma_denominador= 0;
  gamma_numerador   =  c*c - b*b - a*a ;
  gamma_denominador = -2*a*b;
  gamma             = conversion*acos(gamma_numerador/gamma_denominador);

  std::cout<< "alpha = "<< alpha << "\n";
  std::cout<< "beta  = "<< beta  << "\n";
  std::cout<< "gamma = "<< gamma << "\n";
  std::cout<< "Total Angules Add (180º) "<< alpha + beta + gamma << "\n";
  
  return 0;
}

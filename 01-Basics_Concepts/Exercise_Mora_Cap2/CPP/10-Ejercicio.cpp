/*
  Dadas las coordenadas en R^2, de los vertices de un triangulo calcule, en grados los
  3 angulos.
 */

#include <iostream>
#include <cmath>

int main(){
  std::cout << "El siguiente programa necesita 3 parejas de puntos, para construir un \n";
  std::cout << "triangulo y con ello, obtener los angulos asociados a  cada  lado  del  \n";
  std::cout << "triangulo \n";

  // Primera, ingreso de la informacion.
  // Solo se piden las coordenadas.
  
  float ax = 0, ay = 0, bx = 0 , by = 0, cx = 0, cy = 0;
  std::cout << "Ingrese por favor la primera pareja de puntos (x1,y1)\n";
  std::cin >> ax>> ay;
  std::cout << "Ingrese por favor la segunda pareja de puntos (x2,y2)\n";
  std::cin >> bx>> by;
  std::cout << "Ingrese por favor la Tercera pareja de puntos (x3,y3)\n";
  std::cin >> cx>> cy;

  // Segunda parte tratamiento de la informacion (Construye cada lado)
  // Con ello se puede calcular la distancia que existe en cada tramo
  //  lado a =\sqrt((ax-bx)^2+(ay-by)^2)
  //  lado b =\sqrt((cx-bx)^2+(cy-by)^2)
  //  lado c =\sqrt((ax-cx)^2+(ay-cy)^2)

  
  float a = 0, b=0, c=0;
  a = sqrt(pow(ax-bx,2)+pow(ay-by,2));
  b = sqrt(pow(cx-bx,2)+pow(cy-by,2));
  c = sqrt(pow(cx-ax,2)+pow(cy-ay,2));

  std::cout << "Con estos valores se obtuvieron los siguientes resultados: \n";
  std::cout << "a ="<<a << "\t, b =" << b << "\t, c=" << c << std::endl;

  // Tercera Parte convertir dicha informacion en de longitud en grados
  float alpha =0, beta=0, gamma=0; 
  float conversion = 180/3.1416;
  
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


/* Tomado del texto de UNAL-Mora. Cap 03
   La primera estructura de control es 
   
   ...                -- Estructura tipica de una sentencia if en C  
   
   Sentencia_1;      
   if(condicion){     -- La condicion, se debe cumplir para acceder  al if
   Condicion a;       -- Esto puede ser un Bloque de codigo mientras la condicion se cumpla
   }else{             -- En alguno casos, no se puede escribir el else llevando a la Senten
   Condicion b;       -- cia_2
   }
   Sentencia_2;
*/

/* El siguiente programa consedera las reices reales y las raices complejas de una ecuacion 
   cuadratica. dependiendo del discriminante. Adaptacion del codigo en C++
*/

#include <iostream>
#include <cmath>

int main(){

  double a = 0, b = 0, c = 0, raiz1 = 0, raiz2 = 0, d = 0, a2 = 0, pReal = 0, pCom = 0;
  std::cout <<
    "Hi!, with this programm you can find the real root or imagine roots, by quadractic \n"
    "equation.\n"
    "                                  a*x^2 + b*x+ c =0      \n"
    "Please typing  the  values a , b and c.\n" << std::endl;
  std::cin >> a >> b >> c;
  std::cout <<
    "The equation to solve is \n"
    "             "<< a <<"x^2 + " << b << " x + " << c << " = 0 \n ";
  // With this information make the algoritm
  a2 = 2.0*a;
  d = b*b-4.0*a*c;
  if (d >= 0.0){
    //Real values
    d = std::sqrt(d);
    raiz1 = (-b + d)/a2;
    raiz2 = (-b - d)/a2;
    std::cout << "Las raices reales, son r1 = " << raiz1 << " y r2 = " << raiz2 << std::endl;
  }
  else{
    // Complex Values
    d = std::sqrt(-d);        // se multiplica por -*d para evitar el error matematico
    pReal = -b/a2;
    pCom  =  d/a2;
    std::cout <<
      "Las raices complejas de la ecuacion cuadratica son: \n" <<
      " *                  raiz 1 = "<< pReal << " + " << pCom << "i \n"<<
      " *                  raiz 2 = "<< pReal << " - " << pCom << "i \n";
  }

  
  return 0;
}

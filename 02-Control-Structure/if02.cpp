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
   cuadratica. dependiendo del discriminante. Adaptacion del codigo en C++.

   Version 2.0 = Adicional a ello se anidaran los if para el caso cuando a = 0.0
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
  // With this information make the algoritm. The firts step is define the  when we have a
  // quadratic equation, is main  a =! 0, Thus the other case is rest

  if(a != 0.0){ 
    // Tenemos una ecuación cuadratica como Dios manda
    a2 = 2.0*a;
    d = b*b-4.0*a*c;
    if (d >= 0.0){
      //Real values
      d = std::sqrt(d);
      raiz1 = (-b + d)/a2;
      raiz2 = (-b - d)/a2;
      std::cout << "Las raices reales, son r1 = " << raiz1 << " y r2 = " << raiz2 << std::endl;
    }else{
      // Complex Values
      d = std::sqrt(-d);        // se multiplica por -*d para evitar el error matematico
      pReal = -b/a2;
      pCom  =  d/a2;
      std::cout <<
	"Las raices complejas de la ecuacion cuadratica son: \n" <<
	" *                  raiz 1 = "<< pReal << " + " << pCom << "i \n"<<
	" *                  raiz 2 = "<< pReal << " - " << pCom << "i \n";
    }
  }
  else{
    // Ecuacion no cuadratica.
    if (b != 0.0){
      // En este caso tenemos que a = 0.0 y b != 0.0, con ello nuestra ecuacion a resolver
      // seria  b*x + c = 0
      std::cout << "La ecuacion es lineal.Su raiz es : " << -c/b << std::endl;
    }else{
      /* En este caso tenemos que a = 0.0, b = 0.0 con lo cual  c = 0, Es decir; que no 
	 esta la variable x, con lo cual todos los valores de x la satisfacen. */
      if( c == 0.0) std::cout << "Todo real es solución \n";
      else std::cout << "No hay solucion \n";
    }
  }
  
  
  return 0;
  
}

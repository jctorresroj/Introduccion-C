/* Tomado del texto de UNAL-Mora. Cap 03
   La primera estructura de control es 
   
   ...                -- Estructura tipica de una sentencia while en C  
   
   Sentencia_a;          --
   while(condicion){     -- La condicion, se debe cumplir para acceder  al while
         Sentencia 1;    -- Una vez la condicion deje de ser valida se acaba el while.Es de- 
	 .               -- cir; cada vez que se realiza la ultima sentencia#, se pasa a veri
	..		 -- ficar  la condicion, y continuara realizando este procedimiento
	..		 -- hasta que la condicion no se cumpla.
   }
   Sentencia_b;
*/

/* El siguiente programa, se calcula una aproximacion de cos(x), recordemos
           cos(x) = 1 - \frac{x^2}{2!} +\frac{x^4}{4!} -... = \Sigma (-1)^n\frac{x^2n}{(2n)!}
   Tomando el termino k-esimo
            a_k =a_{k-1} \frac{x^2}{2k(2k - 1)!}          s_n = \Sigma_{k=0}^{n} a_k
   Dado un valor positivo de € cercano a cero, por ejemplo 0
*/

#include <iostream>
#include <cmath>

int main(){
  double x = 0 , sn = 0, an = 0, xx = 0, eps = 0;
  int    n2 = 0;
  
  std::cout << "Calculo aporximado de cos(x), \n \n x = ";
  std::cin  >> x ;

  eps   = 1.0e-8;
  xx    = x*x;
  an    = -xx/2.0;
  sn    = 1.0 + an;
  n2    = 2;

  while( std::abs(an)/(1.0 +std::abs(sn)) > eps){
    n2    += 2;
 // an    *= -xx/(n2*(n2 - 1.0));
    an    *= -xx/n2/(n2 - 1.0);
    sn    += an ;
    std::cout << "a_n = " << an << " y condicion " << std::abs(an)/(1.0 +std::abs(sn))<< "\n";
  }
  std::cout << " cos(x) = " << sn << std::endl;
  return 0;
}

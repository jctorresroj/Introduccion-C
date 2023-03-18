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

/* El siguiente programa, se calcula una aproximacion de exp(x), recordemos
             e^x = 1 + x + \frac{x^2}{2!} +\frac{x^3}{3!} +... = \Sigma \frac{x^n}{n!}
   Tomando el termino k-esimo
            a_k = \frac{x^k}{k!}          s_n = \Sigma_{k=0}^{n} a_k
   Dado un valor positivo de € cercano a cero, por ejemplo 0.00000001, el calculo aproximado
   de e^x se realiza hasta que 
            \frac{|a_n|}{1+|s_n|} \leq €  --- el 1 es para segura que denominador no sea nulo
*/

#include <iostream>
#include <cmath>

int main(){
  double x = 0 , sn = 0, an = 0, nFact = 0, eps = 0;
  int    n = 0;
  
  std::cout << "Calculo aporximado de exp(x), \n \n x = ";
  std::cin  >> x ;

  eps   = 1.0e-8;
  sn    = 1.0 + x;
  nFact = 1;
  n     = 1;
  an    = x;

  while( std::abs(an)/(1.0 +std::abs(sn)) > eps){
    n++;
    nFact *= n;
    an     = std::pow(x,n)/nFact;
    sn    += an ;
    std::cout << "a_n = " << an << " y condicion " << std::abs(an)/(1.0 +std::abs(sn))<< "\n";
  }
  std::cout << " exp(x) = " << sn << std::endl;
  return 0;
}

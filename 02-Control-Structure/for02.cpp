/* Tomado del texto de UNAL-Mora. Cap 03
   La primera estructura de control es 
   
   ...                -- Estructura tipica de una sentencia for en C  
   
   Sentencia_a;      
   for(INIC ;CDC; MOD){     -- La condicion, se debe cumplir para acceder  al if
         Condicion 1;       -- Esto puede ser un Bloque de codigo mientras la condicion se 
	                    -- cumpla
			    -- despues de realizar la ultima instruccion se efectua la modi-
			    -- cacion.
   }
   Sentencia_b;
*/

/* El siguiente programa, se calcula el factorail de n, cuando n es pequeno. El resultado es
   es un valor entero*/

#include <iostream>
#include <cmath>

int main(){
  int n = 0, i = 0, nFact = 0;
  std::cout <<"Typing the n value = ";
  std::cin  >> n ;

  nFact = 1 ;
  for(i = 2; i <= n; i++) nFact *= i;
  std::cout << nFact << std::endl;
  
  return 0;
}

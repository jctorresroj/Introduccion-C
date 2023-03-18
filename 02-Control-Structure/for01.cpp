
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

/* El siguiente programa, se calcula la suma de 1 hasta 15 de 1/i con escritura de las 
   sumas parciales. */

#include <iostream>
#include <cmath>

int main(){
  double suma = 0.0;
  int i = 0;

  for( i=1 ; i <= 15 ; i++){
    suma += 1.0/i;
    std::cout << "i =" << i << ", suma = " << suma << std::endl;
  }

  return 0;
}

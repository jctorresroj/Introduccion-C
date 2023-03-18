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

/* En la parte de la inicializacion del for puede haber más de una inicializacion. en este 
   caso deben estar separadas por una coma. De igual manera ocurre con la mod
   
   En el siguiente programa, i empienza en i y j empienza en 20; al final de cada repeteti
   cion i, aumenta en uan unidad y j disminuye en 2 unidades. 
*/

#include <iostream>
#include <cmath>

int main(){
  int n= 0, i = 0, j =0 , suma = 0 ;

  n = 20;
  suma = 0;
  
  for( i = 1, j = n ; i < j && i*i < j*j -10*j ; i++, j -= 2){
    suma += i + j;
    std::cout << "i =" << i <<", j =" << j <<", suma =" << suma << std::endl;
  }
  std::cout << "Total Suma =" << suma << std::endl;
  
  return 0;
}

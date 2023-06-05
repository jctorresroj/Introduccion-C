/* Calculo delas raices de una ecuacion cuadratica, cuando son reales

   Para compilar C con la libreria matematica es necesario agregar la bandera -lm,
   Entiendo que hace referencia a la libreria -l y -lm a la libreria matematica en
   particular.
   
 */

#include <iostream>
#include <cmath>
#include <time.h>   //for clock_t,clock(), CLOCKS_PER_SEC
#include <unistd.h> // for sleep()

int main(){
  
  // para almacenar el tiempo de ejecución del código
  double time_spent = 0.0;
 
  clock_t begin = clock();
 
  // hacer algunas cosas aquí
  // sleep(3);
  double a = 7.0, b = 3.1, c = -5.72;
  double raiz1, raiz2,d , a2;

  a2 = 2.0*a;
  d  = sqrt(b*b-4.0*a*c);
  raiz1 = (-b + d)/a2;
  raiz2 = (-b - d)/a2;

  std::cout << "Las raices son r1 = " << raiz1 << "y r2= "<< raiz2<< "\n";
  
 
  clock_t end = clock();
 
  // calcula el tiempo transcurrido encontrando la diferencia (end - begin) y
  // dividiendo la diferencia por CLOCKS_PER_SEC para convertir a segundos
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
  printf("The elapsed time is %f seconds \n", time_spent);

  return 0;
}

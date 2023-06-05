/* En todo lenguaje de programacion de programacion, es necesario declarar variables de tal
   manera que ellas sean claros, es decir, no pueden ser palabras muy extensar o por el con-
   trario palabras muy cortas. Para tal fin, se pueden utilizar caracteres ALFANUMERICOS,
   sin embargo, no todas las palabras se pueden utilizar debido a que hay terminos que estan
   reservados para cada lenguaje en especifico, asimimos no se pueden definir variables que
   contengan los siguientes caracteres *.-.[, { , +, entre otros. Una variable se considera
   que esta definida correctamente, si similar a als siguientes:
                 variable_01
		 variable01
   Por otra parte existen, diferentes tipos de variables como INT, FLOAT, DOUBLE, CHAR. Las
   cuales dependiendo de su identificador ocupan diferentes espacios en la memoria del equi-
   po. Tambien existen extensiones de las mismas UNSIGNED INT or LONG INT, LONG DOUBLE
   (Python por ser un lenguaje intepretado no se cumple dicha separacion de variables)

   Operador de Asignacion
   Es el operador más utilizado. Mediante su uso se le asigna a una variable un nuevo valor.
   La forma  forma general es:
                                   variable  = Asignacion
   Lo anterior indica que la variable, siempre esta a la izquierda del signo igual,toma el
   valor dado por la expresion de la derecha. Es diferente a la relacion de igualdad mate-
   matica
 */

#include <stdio.h>

int main(){
  int a;
  double x,y;
  char c;
  
  //printf("%i",a);
  
  printf("a = %i \n", a );
  a = 100;
  printf("a = %i \n", a);
  y = 9.0/4.0;
  printf("y = %f \n", y);
  x = 5.0 + y;
  printf("x = %f \n", x);
  a = a +3;
  printf("a = %i \n", a);
  c = 'a';
  printf("c = %c \n", c);

  /* Para imprimir en C, es necesario aclarar el tipo de variable que se va a mostrar,
     es decir si es: int se escribe  %i, si es float %f, si es double %lf, si es char
     %char
   */

  
  //
  // Operadores Aritmeticos
  //
  
  int  i = 27, j=4, k=0;
  k = i+j;
  printf("k = %i \n", k);

  float o = 10.0 , p= 3.0;
  printf("Relacion  x/y = %f \n", o/p); // operador division
  printf("Relacion  x*y = %f \n", o*p); // operador multiplicacion
  printf("Relacion  i/j = %i \n", i/j); // operador division 

  int jj=-4;
  printf("Relacion  i/j = %i \n", i/jj);
  // El operador - ademas de indicar sustracion, operacion binaria, sirve para indicar el 
  // cambio de signo.

  int xi= 25, xj= 7, xk=0;
  xk = xi%xj;
  printf("k = %i \n", xk);

  /* Operador de incremento ++ o decremento --. Se pueden utilizar como:
      k = i++;
               k = i;
	       i++;

      k = ++j;
               j++; o ++j;
	       k=j;
   */

  int ai=4, aj=4, ak=0;
  ak = ai++;
  printf("Adicion i = %i a k = %i \n", ai, ak);
  ak = ++aj;
  printf("Adicion j = %i a k = %i \n", aj, ak);
  /* En las operaciones aritmeticas existen reglas precisas de prioridad llamadas
     PRECEDENCIA. Lo primero es que siempre se resuelven los parentesis (,) sobre
     cualquier operacion. Primero actuan los operadores Incremento o decremento,
     Luego la division, multiplicacion o residuo. Finalmente lo hacen los operadores
     de adicion , sustraccion
   */

  double m = 1.2, n = 3.1 , q , r;
  o =-2.5;
  p = 5.1 ;
  q = m/n/o; // q = (m/n)/o;
  r = (m/n)/o;
  printf("El valor de precedencia de la expresion q = m/n/o (q = %lf) \n", q);
  printf("Con respecto al valor de r = (m/n)/o (r = %lf) \n", r);
  q = m*n + o/p-o*p; 
  r = ((m*n) + (o/p))-(o*p);
  printf("El valor de precedencia de la expresion q = m*n + o/p-o*p (q = %lf) \n", q);
  printf("Con respecto al valor de r = ((m*n) + (o/p))-(o*p) (r = %lf) \n", r);

  /* Adicionalmente se tiene las siguientes abreviaciones con respecto a las asignaciones:
       a = a  + 2.0;                                a += 2.0;
       b = b + c;                                   b += c;
       a = a*3.0;                                   a *=3.0;
       i = i -2;                                    i -= 2;
       b = b/c;                                     b /= c;
  */
  printf("Prueba de la abreviacion o += 2,0; es  = %lf \n", o += 2);
  return 0;
}

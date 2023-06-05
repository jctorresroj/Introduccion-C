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

#include <iostream>

int main(){
  int a;
  double x,y;
  char c;
  
  //printf("%i",a);
  
  std::cout << "a = "<< a<<" \n";
  a = 100;
  std::cout << "a = "<< a<<" \n";
  y = 9.0/4.0;
  std::cout << "y = "<< y<<" \n";
  x = 5.0 + y;
  std::cout << "x = "<< x<<" \n";
  a = a +3;
  std::cout << "a = "<< a<<" \n";
  c = 'a';
  std::cout << "c = "<< c<<" \n";
  //printf("c = %c \n", c);

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
  std::cout<<"Relación x/y =" << o/p<< "\n";
  std::cout<<"Relación x*y =" << o*p<< "\n";
  std::cout<<"Relación i/j =" << i/j<< "\n";
  
  int jj=-4;
  std::cout << "Relacion i/j = " << i/jj<<"\n"; 
  // El operador - ademas de indicar sustracion, operacion binaria, sirve para indicar el 
  // cambio de signo.

  int xi= 25, xj= 7, xk=0;
  xk = xi%xj;
  std::cout << "k = "<< xk << "\n";

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
  std::cout << "Adicion de i = " << ai << "a k= " << ak << "\n";
  ak = ++aj;
  std::cout << "Adicion de j = " << aj << "a k= " << ak << "\n";
  
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
  std::cout<< "El valor de precedencia de la expresion q = m/n/o (q = " << q <<") \n";
  std::cout<< "El valor de precedencia de la expresion r = (m/n)/o (q = " << r <<") \n";
  q = m*n + o/p-o*p; 
  r = ((m*n) + (o/p))-(o*p);
  std::cout<< "El valor de precedencia de la expresion q = m*n + o/p-o*p (q = " << q <<") \n";
  std::cout<< "El valor de precedencia de la expresion r = ((m*n) + (o/p))-(o*p) (q = " << r <<") \n";

  /* Adicionalmente se tiene las siguientes abreviaciones con respecto a las asignaciones:
       a = a  + 2.0;                                a += 2.0;
       b = b + c;                                   b += c;
       a = a*3.0;                                   a *=3.0;
       i = i -2;                                    i -= 2;
       b = b/c;                                     b /= c;
  */
  
  return 0;
}

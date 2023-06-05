""" En todo lenguaje de programacion de programacion, es necesario declarar variables de tal
   manera que ellas sean claros, es decir, no pueden ser palabras muy extensar o por el con-
   trario palabras muy cortas. Para tal fin, se pueden utilizar caracteres ALFANUMERICOS,
   sin embargo, no todas las palabras se pueden utilizar debido a que hay terminos que estan
   reservados para cada lenguaje en especifico, asimimos no se pueden definir variables que
   contengan los siguientes caracteres *.-.[, { , +, entre otros. Una variable se considera
   que esta definida correctamente, si similar a als siguientes:
                 variable_01 = 0
		 variable01  = "Cadena de caracteres"

   En python es necesario declarar e inicializar cada variable , como se muestra a conti-
   nuacion debido a que no existe los caracteres INT, DOUBLE, ... A continuación se muestra
   Como declarar multiples variables en Python
                      a,  x,  y ,  c = 0,0,0, " "
 
   Sin embargo, esto es menos legible, por ello se utiliza la forma de columna.

    ---- Operador de Asignacion

   Es el operador más utilizado. Mediante su uso se le asigna a una variable un nuevo valor.
   La forma  forma general es:
                                   variable  = Asignacion
   Lo anterior indica que la variable, siempre esta a la izquierda del signo igual,toma el
   valor dado por la expresion de la derecha. Es diferente a la relacion de igualdad mate-
   matica
 """

a = 0
x = 0
y = 0
c = " " 
print("a = ", a )
a = 100
print("a = ", a )
y = 9.0/4.0
print("y = ", y )
x = 5.0 + y
print("x = ", x )
a = a +3
print("a = ", a )
c = "a"
print("c = ", a )


  
""" 
   Operadores Aritmeticos
"""

"""
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

En las operaciones aritmeticas existen reglas precisas de prioridad llamadas
  PRECEDENCIA. Lo primero es que siempre se resuelven los parentesis (,) sobre
  cualquier operacion. Primero actuan los operadores Incremento o decremento,
  Luego la division, multiplicacion o residuo. Finalmente lo hacen los operadores
  de adicion , sustraccion
 

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

  Adicionalmente se tiene las siguientes abreviaciones con respecto a las asignaciones:
  a = a  + 2.0;                                a += 2.0;
  b = b + c;                                   b += c;
  a = a*3.0;                                   a *=3.0;
  i = i -2;                                    i -= 2;
  b = b/c;                                     b /= c;
 """
  

// Resuelva el sistema de dos ecuaciones lineales con dos incognitas. Suponga  que tiene una
// unica solucion

// add the libraries needed to run the program

#include <iostream>

int main(){
  std::cout <<"Hi!, with this program you can solver the lineal system with  two variables, as a: \n \n";
  std::cout <<" ax + by = c \n" <<" dx + ey = f \n \n" << std::endl;
  std::cout << "As a system have a unique solution:\n";
  std::cout <<" * a isn't same to d \n"<<" * b and d they are diferents \n \n";

  // In this line we define the varibles for the system
  
  float a=0, b=0, c=0, d=0, e=0, f=0;

  // In this line we need the value of variables to solve the system

  std::cout << "please, introduces de value for a \n";
  std::cin >> a;
  std::cout << "for b \n";
  std::cin >> b;
  std::cout << "and c \n";
  std::cin >> c;
  std::cout <<"\n Now i need te values for the second equations \n";
  std::cout << "please, introduces de value for d \n";
  std::cin >> d;
  std::cout << "for e \n";
  std::cin >> e;
  std::cout << "and c \n";
  std::cin >> f;

  std::cout << "\n The system to solve, is; \n";
  std::cout << a << "x" <<" + "<< b << "y = " << c << std::endl;
  std::cout << d << "x" <<" + "<< e << "y = " << f << std::endl;

  /* In this case we need calculate the determinate 
     D  = a*e - d*b, 
     addition we need the 
     Dx = c*e - f*b 
     Dy = a*f - d*c
  */
  float deter = a*e - d*b;
  float DetX  = c*e - f*b;
  float DetY  = a*f - c*d;
  
  float SolX = DetX/deter;
  float SolY = DetY/deter;

  std::cout << "Solution by crammer method \n ";
  std::cout << "deter = " << deter << ", DetX = " << DetX <<", DetY = " << DetY <<std::endl;
  std::cout << "La solución para la variable x es:" << SolX << std::endl;
  std::cout << "La solución para la variable y es:" << SolY << std::endl;

  
  /* In this part  we solver the system, between igualation. Then we define the new varibles
     begin to solver the y term. Then the equation to solve is:
     (a*d+d*(-a))*x + (b*d+e(-a))*y = (c*d + f(-a)) 

     float termY = b*d - e*a;
     float termR = c*d - f*a;
     float SolY  = termR/termY;
     
     std::cout << termY << " " << termR << std::endl;
     std::cout << "La solución para la variable y es:" << SolY << std::endl;
     
     How I now the solution ofr the y. I can sustitute this value in aniways equation
     With this, if i  sustitute in the firts equation we have:
     x = (c-b*y)/a
     
     
     float SolX = (c-b*SolY)/a;
     std::cout << "La solución para la variable x es:" << SolX << std::endl;
     
     
     This algoritm has the fine work, but the most efficently method to solve this problem is 
     the Crammer Rule.
  */
 
  return 0;
}


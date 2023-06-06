// Resuelva el sistema de tres ecuaciones lineales con tres incognitas. Suponga  que tiene una
// unica solucion

// add the libraries needed to run the program

#include <iostream>

int main(){
  std::cout <<"Hi!, with this program you can solver the lineal system with  three variables, as a: \n \n";
  std::cout <<" ax + by + cz = d \n" << " ex + fy + gz = h \n" << " ix + jy + kz = l \n \n" << std::endl;
  std::cout << "As a system have a unique solution:\n";
  std::cout <<" * a isn't same to e or i \n"<<" * b, f and j  they are diferents \n \n";

  // In this line we define the varibles for the system
  
  float a=0, b=0, c=0, d=0; // firts equation
  float e=0, f=0, g=0, h=0;
  float i=0, j=0, k=0, l=0;

  // In this line we need the value of variables to solve the system

  std::cout << "please, introduces de value for a \n";
  std::cin >> a;
  std::cout << "for b \n";
  std::cin >> b;
  std::cout << "for c \n";
  std::cin >> c;
  std::cout << "and d \n";
  std::cin >> d;

  std::cout <<"\n Now i need te values for the second equations \n";
  std::cout << "please, introduces de value for e \n";
  std::cin >> e;
  std::cout << "for f \n";
  std::cin >> f;
  std::cout << "for g \n";
  std::cin >> g;
  std::cout << "and h \n";
  std::cin >> h;

  std::cout <<"\n Finally i need te values for the Third equations \n";
  std::cout << "please, introduces de value for i \n";
  std::cin >> i;
  std::cout << "for j \n";
  std::cin >> j;
  std::cout << "for k \n";
  std::cin >> k;
  std::cout << "and l \n";
  std::cin >> l;
 

  std::cout << "\n The system to solve, is; \n";
  std::cout << a << "x" <<" + "<< b << "y + " << c <<" z = " <<  d << std::endl;
  std::cout << e << "x" <<" + "<< f << "y + " << g <<" z = " <<  h << std::endl;
  std::cout << i << "x" <<" + "<< j << "y + " << k <<" z = " <<  l << std::endl;

  /* In this case we need calculate the determinate 
     D  = a*f*k + b*g*i + c*e*j - i*f*c - j*g*a - k*e*b 
     addition we need the calculate
     Dx = d*f*k + b*g*l + c*h*j - l*f*c - j*g*d - k*h*b 
     Dy = a*h*k + d*g*i + c*e*l - i*h*c - l*g*a - k*e*d
     Dz = a*f*l + b*h*i + d*e*j - i*f*d - j*h*a - l*e*b
  */
  float deter = a*f*k + b*g*i + c*e*j - i*f*c - j*g*a - k*e*b;
  float DetX  = d*f*k + b*g*l + c*h*j - l*f*c - j*g*d - k*h*b;
  float DetY  = a*h*k + d*g*i + c*e*l - i*h*c - l*g*a - k*e*d;
  float DetZ  = a*f*l + b*h*i + d*e*j - i*f*d - j*h*a - l*e*b;

  float SolX = DetX/deter;
  float SolY = DetY/deter;
  float SolZ = DetZ/deter;

  std::cout << "Solution by crammer method \n ";
  std::cout << "deter = " << deter << ", DetX =" << DetX <<", DetY =" << DetY <<", DetZ =" << DetZ <<std::endl;
  std::cout << "La solución para la variable x es:" << SolX << std::endl;
  std::cout << "La solución para la variable y es:" << SolY << std::endl;
  std::cout << "La solución para la variable z es:" << SolZ << std::endl;

  
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


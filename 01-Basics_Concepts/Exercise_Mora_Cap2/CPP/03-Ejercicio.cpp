/*Resuelva una ecuacion polinomica (polinomial) de tercer grado por de la formula de
  Tartaglia y Cardano.Suponga que se tiene el caso mas sencillo
*/

// add the library or header needers to work

#include<iostream>
#include<cmath>

int main(){
  // Define the varibles to work the third polynomials grade

  float A = 0, B = 0, C = 0, D = 0 ;

  // Now, user to typing the values for each varible
  
  std::cout <<"Hi!, with this program you can solve third grade polynomials between the \n";
  std::cout <<"Tartaglia-Cardano Method. Firts, the tipical third grade polynomial as a:\n";
  std::cout <<"                 Ax**3 + Bx**2 + Cx + D = 0                              \n";
  std::cout <<"To begin, it need knows the A value \n";
  std::cin  >> A;
  std::cout <<"The B Value \n";
  std::cin  >> B;
  std::cout <<"The C Value \n";
  std::cin  >> C;
  std::cout <<"And,The D Value \n ";
  std::cin  >> D;
  std::cout << "The Polynomial thats you need solve is: \n" ;
  std::cout <<"                "<< A <<"x**3 + " << B <<"x**2 +" << C <<"x + "<<D <<" = 0\n";

  /* The next step to solve this problem is divide the all polynomial for A, With this we 
     define the new polynomyals:
                                   x**3 + ax**2 + bx + c = 0                             

     where  a = B/A, b= C/D and c = D/C. Then the programm need the a , b and c.
   */
  
  float a = B/A, b = C/A , c = D/A;

  /* to aplied the sustitution x = y -b/3a, we obtein: 
                x**3  +(0.33*(3b-a**2))*x + (2a**3 - 9*a*b + 27c)/27  = 0           
     where p = c-(1.0/3.0) and q = (2*pow(b , 3) - 9*c*b + 27)/27.
   */
  float p =  0.3333*(3*b -std::pow(a , 2.0));
  float termQ = 2*std::pow(a , 3.0) - 9*a*b + 27*c ;
  float q = termQ/27 ;
  
  std::cout <<"Now, we  use  the  Tschirnhaus transformation to eraser the second grade \n"; 
  std::cout <<"term (y**2),through the changes varible x = y -a/3.Thus, the polynomials:\n";
  std::cout <<"                "<< 1 <<"y**3 + " << p <<"y + "<< q <<" = 0\n";

  /* If, we do the sustution y = u + v, then
     (u + v)**3 = u**3 + v**3 + 3u**2v + 3uv**2 
                = u**3 + v**3 + 3uv( u + v )
     Then we have the identity
     (u + v)**3  + 3uv( u + v )  - u**3 - v**3= 0
     Thus the last equation have same form to before equation, after we have 
     1 -> p = -3uv          <---> (-p/3u) = v 
     2 -> q = - u**3 - v**3 
     then 
          q = -u**3 -(-p/3u)**3
	  q = -u**3 + p**3/3u**3
	  u**6 + qu**3 - (p/3)**3 = 0
     this way, if i know the u value, we have solve the problem
     u_+/- = cbrt((-q +/- sqrt(Deter))/2)
   */

  // Define variable to solution the problem

  float DeterQ  = std::pow(0.5*q , 2.0);
  float DeterP  = std::pow(0.333*p , 3.0);
  float Deter   = DeterQ + DeterP;
  float Uplus   = std::cbrt(-0.5*q + std::sqrt(Deter));
  float Uminus  = std::cbrt(-0.5*q - std::sqrt(Deter));
  float solut   = Uplus + Uminus - 0.333*a;
  std::cout <<"We calculate the determ, to know if the solution is in the Real field or not \n";
  std::cout << Deter << std::endl;
  std::cout <<"The  solution is \n";
  std::cout << solut  << std::endl;

  
  return 0;
}

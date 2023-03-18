/*Dado un angulo en radianes, conviertalo a grado , minutos y segundos
 */

#include <iostream>
#include <cmath>

const double pi = std::acos(-1);

int main (){
  std::cout <<
    "Hi!, with this program you can to convert angle in radians, to grade, minute \n" 
    "and seconds, Thus, the rutine need the Radians value : \n";

  float Primitive_radian = 0;
  std::cin >> Primitive_radian;
  std::cout << "The value to convert is: "<< Primitive_radian<< std::endl;
  
  /*To convert the radians to D,M,S you need 
    degree = rad*(180/pi)
   */
  float grade = 0, Pgrade = 0, Pmin = 0;
  Pgrade = Primitive_radian*(180/pi);
  grade  = std::trunc(Pgrade);
  Pmin = Pgrade - grade;
  std::cout << "grade " << grade << "º and  "<< Pmin << std::endl;
  
  /* To convert  the  min 
     min = Pmin*60
   */
  float min = 0, Psec = 0;
  Pmin  = Pmin*60;
  min   = std::trunc(Pmin);
  Psec  = Pmin - min;
  Psec  = Psec*60;
  std::cout << "The angle is: " << grade<< "º, " <<min << "', " << Psec << "''"<< std::endl;
  

    
  return 0;
}

/* Calcule el coseno de un angulo medido en grados, minutos y segundos.
*/

#include<iostream>
#include<cmath>

/*
  With this line, difine the pi constant
 */

const double pi = std::acos(-1);


int main (){
  std::cout <<
    "Hi!, with this program you can calculate de the Cosen function on  grade,\n"
    "minute and seconds. Then you can typing the angle \n ";
  
  /* Thus, we going to writter te value for this calculate */
  
  std::cout <<" Write the grade, min and second \n";

  int grade = 0, min=0;
  float sec = 0;
  
  std::cin >> grade >>min >> sec ;
  std::cout << "The angle is " << grade << "º, " << min << "', "<< sec <<" '' \n";

  /*In this part of the program you can convert the grade to radian, then First convert
   your 'd.m.s' measure to decimal degreees (dd), and then convert that to radians
   rad = pi*[(d+m/60+s/3600)/180]
  */
  float gradeDD = grade + min/60 + sec/3600 ;
  float rad = pi*(gradeDD/180);
  float cosValue = std::cos(rad);

  std::cout << "The  cosine asociate to this value is: "<< cosValue << std::endl;
  
  
  return 0;
}

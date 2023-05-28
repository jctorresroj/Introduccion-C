/*Un objeto ha recorrido una distancia d (metros) en un tiempo t(horas, minutos y segundos).
  Calcule su velocidad promedio en Km/h y el numero de segundos necearios para recorrer un
  kilometro.
*/

#include<iostream>
#include<cmath>

int main(){
  std::cout <<
    "Hi!!, with this program you can calculate the velocity Km/h it object, this body, has\n"
    "a distance d (meters) and a time t (hours, minute and seconds). What is the  distance\n"
    "walk to this object?"
	    << std:: endl;
  float Mdistan = 0, Tsec = 0;
  float   Thour = 0, Tmin = 0;
  
  std::cin >> Mdistan;
  std::cout <<
    "What is the time needed to complete the journey? How many Hours? \n ";
  std::cin >> Thour;
  std::cout << "How many Minute and Seconds? \n" ;
  std::cin >> Tmin;
  std::cin >> Tsec;
  /* Convert the Units
   */
  float vel = 0, KMdistan = 0, TotalHour = 0;

  KMdistan  = Mdistan/1000 ;
  TotalHour = Thour + Tmin/60 + Tsec/3600 ;
  vel = KMdistan/TotalHour ;

  std::cout << "Total distance is: " << KMdistan  << " Km \n";
  std::cout << "Total time is:     " << TotalHour << " Hours \n";
  std::cout << "Finally the velocity asociated with this is " << vel << " Km/h \n";
  std::cout << "Thus to road 1 km we needed, "<< (1/vel)*3600 << " seconds \n";
  
  return 0;
}

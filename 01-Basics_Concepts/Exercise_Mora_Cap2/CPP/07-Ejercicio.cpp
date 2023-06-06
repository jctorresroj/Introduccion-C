/* Calcule la couta mensual fija para un prestamos por un monto de M pesos, con una
   tasa fija de interes mensula i (en porcentaje) y con un plazo de n meses. 
 */

#include <iostream>
#include <cmath>

int main(){
  std::cout <<"With this program you can, calculate the rise in static month cost of \n";
  std::cout <<"the loan for M pesos, with a growth permanent rate of month i (in per- \n";
  std::cout <<"centaje) in n months \n";

  // Tasa efectiva mensual = i
  // Numero de meses       = n
  //
  double i = 0.1325, cuota =0, Monto = 0, n = 0;

  std::cout <<" Please introduce the mount of load \n";
  // Por favor ingrese el valor del prestamos
  std::cin >> Monto;
  std::cout <<" Please introduce the number of month \n";
  // Por favor ingrese el valor del prestamos
  std::cin >> n;
  std::cout<<"remenber the rise today is 13.25% \n";
  // La informacion se obtuvo del siguiente sitio web:
  // https://comparabien.com.co/faq/como-calcular-cuota-credito
  //
  
  double numerador =0, denominador =0;

  numerador   = Monto*(i*pow(1+i,n));
  denominador = (pow(1+i,n)-1);

  cuota = numerador/denominador;

  std::cout<<"The efective to pay is: "<< cuota << std::endl;

  return 0;
}

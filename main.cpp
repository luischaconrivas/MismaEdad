#include <iostream>
/*
21 de abril del 2021
Práctica Curso Programación con C++
Estudiante: Luis Angel Chacón Rivas
email:      luischaconrivas@gmail.com
*/
using namespace std;
int main(void) 
{
  int edad1, edad2;
  cout  <<"Este programa verifica si dos edades son iguales.\n" << endl;
  cout  <<"Ingrese la edad de la primera persona\n"
        <<"(NO ingrese decimales por favor)\n"
        <<"EDAD #1 = ";
  cin   >>edad1;
  cout  <<"\nIngrese la edad de la segunda persona\n"
        <<"(NO ingrese decimales por favor)\n"
        <<"EDAD #2 =";
  cin   >>edad2;
  cout  <<"¿Ambas edades son iguales? "<< boolalpha << (edad1 == edad2);

  return 0;
}
#include <iostream>
#include "Pitagoras.cpp"
using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Autor:Jimena Tutillo
 * Fecha de creacion: Miercoles, Noviembre 3, 2021 4:10:23 PM
 * Fecha de modificacion: Miercoles, Noviembre 3, 2021 5:50:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
 Programa: Utilizando el teorema de pitagoras encontrar la longitud de la hipotenusa dado el cateto opuesto y adyasente 
 ***********************************************************************/
 int main(){
 	Pitagoras<float> object1(13.6,17.8);
 	cout<<"\n\tLongitud de la hipotenusa: "<<object1.calcularPitagoras(object1.getCatetoOpuesto(),object1.getCatetoAdyasente());
 	Pitagoras<double> object2(23.0012,27);
 	cout<<"\n\tLongitud de la hipotenusa: "<<object2.calcularPitagoras(object2.getCatetoOpuesto(),object2.getCatetoAdyasente());
 	Pitagoras<int> object3(4,3);
 	cout<<"\n\tLongitud de la hipotenusa: "<<object3.calcularPitagoras(object3.getCatetoOpuesto(),object3.getCatetoAdyasente());
 	
	 return 0;
 }

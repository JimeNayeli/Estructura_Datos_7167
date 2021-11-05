#include <iostream>
#include "funcion.cpp"


/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Nombre:  Paul Chillagana
 * Fecha de creacion: Jueves, November 4, 2021 5:49:23 PM
 * Fecha de modificacion: Jueves, November 4, 2021 7:49:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 *Tema: Operadores sobrecargados
 ***********************************************************************/
int main() {
	
	Pareja A(100, 80 );
    Pareja B(50, 100 );
    Pareja C = A + B;
 
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << "\n";
 
	return 0;
}

#include <iostream>
#include "Vector.h"

using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Volumen de un cono
 * Autor:   Jorge Nasimba
 * Fecha de creacion: Miercoles, Noviembre 3, 2021 11:10:27 AM
 * Fecha de modificacion: Miercoles, Noviembre 3, 2021 11:54:15 AM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/

int main(int argc, char** argv) {
	Vector v1 = {2, 3}, v2 = {2, 3};
  if ( v1 == v2 )
    cout << "Iguales" << endl;
  else
    cout << "Distintos" << endl;
	return 0;
}

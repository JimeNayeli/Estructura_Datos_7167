#include <iostream>
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Sobrecarga operador ==
 * Autor:   Jorge Nasimba
 * Fecha de creacion: Miercoles, Noviembre 4, 2021 20:10:27 PM
 * Fecha de modificacion: Miercoles, Noviembre 4, 2021 21:15:18 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/
using namespace std;


class Vector {
  public: int x, y;
  bool operator== (Vector v) {
    return ((v.x == x) && (v.y == y))? true: false;
  }
};


int main(int argc, char** argv) {
	Vector v1 = {2, 3}, v2 = {2, 3};
  if ( v1 == v2 )
    cout << "Iguales" << endl;
  else
    cout << "Distintos" << endl;
	return 0;
}

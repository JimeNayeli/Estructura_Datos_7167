#include <iostream>
#include <math.h>
#include "Nota.h"
#include "Nota.cpp"
#include "Operacion.h"
#include "Operacion.cpp"
using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Promedio de 5 notas 
 * Autor:   Jorge Nasimba
 * Fecha de creacion: Domingo, Octubre 31, 2021 21:44:21 PM
 * Fecha de modificacion: Domingo, Octubre 31, 2021 22:14:19 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/
int main(int argc, char** argv) {
	
    Operacion<double> op;
	
	cout<<op.calcular_promedio();
	
	return 0;
}

#include <iostream>
#include "Lado.h"
#include "Lado.cpp"
#include "Operacion.h"
#include "Operacion.cpp"
using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Area de un cuadrado
 * Autor:   Jorge Nasimba
 * Fecha de creacion: Viernes, Octubre 29, 2021 7:50:42 PM
 * Fecha de modificacion: Viernes, Octubre 29, 2021 22:32:51 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/
int main(int argc, char** argv) {
	
	Lado <int>l_entero;
    Lado <float>l_flotante;
    
	Operacion<int> op;
	Operacion<float> opr;
	
	cout<<"\nArea del cuadrado: "<<op.calcular_area_entera(78);
	cout<<"\nArea del cuadrado: "<<opr.calcular_area_flotante(12.3);
	
	
	
	
	return 0;
}

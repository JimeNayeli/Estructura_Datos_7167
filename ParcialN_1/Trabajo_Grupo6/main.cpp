#include <iostream>
#include "Fraccion.h"
#include "Operaciones.h"
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Integrantes:  Paul Chillagana, Jorge Nasimba, Jimena Tutillo
 * Fecha de creacion: Jueves, October 28, 2021 5:49:23 PM
 * Fecha de modificacion: Jueves, October 28, 2021 7:49:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/

int main(int argc, char** argv) {
	Operaciones op;
	Fraccion f1(4,5);
	Fraccion f2(6,3);
	int numr=0,denr=0;

	numr=op.numerador_resultante(f1.getNumerador(),f1.getDenominador(),f2.getNumerador(),f2.getDenominador());
	denr=op.denominador_resultante(f1.getDenominador(),f2.getDenominador());

	cout<<"Fraccion Resultante: "<<numr<<"/"<<denr;
	
	return 0;
}

#include <iostream>
#include "Fraccion.h"
#include "Fraccion.cpp"
#include "Operacion.h"
#include "Operacion.cpp"

using namespace std;

/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Plantilla de el ejercicio Fraccion
 * Integrantes:  Paul Chillagana, Jorge Nasimba, Jimena Tutillo
 * Fecha de creacion: Jueves, Noviembre 4, 2021 5:30:23 PM
 * Fecha de modificacion: Jueves, Noviembre 4, 2021 18:10:58 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/


int main(int argc, char** argv) {
	
	Fraccion<int>f1(6,5),f2(4,6);
	Fraccion<double>f3(6.3,5),f4(4,6);
	Operacion<int> op;
	Operacion<double>opr;
	
	cout<<"\t\tFraccion\n";
	cout<<"Datos enteros\n";
	cout<<op.numerador_resultante(f1.getNumerador(),f1.getDenominador(),f2.getNumerador(),f2.getDenominador());
	cout<<"/";
	cout<<op.denominador_resultante(f1.getDenominador(),f2.getDenominador());
	
	
	cout<<"\nDatos decimales\n";
	cout<<opr.numerador_resultante(f3.getNumerador(),f3.getDenominador(),f4.getNumerador(),f4.getDenominador());
	cout<<"/";
	cout<<opr.denominador_resultante(f3.getDenominador(),f4.getDenominador());
	
	
	return 0;
}

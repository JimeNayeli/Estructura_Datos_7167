#include <iostream>
#include "Datos.h"
#include "Datos.cpp"
#include "Operaciones.h"
#include "Operaciones.cpp"
using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Ecuacion de segundo grado
 * Autor:   Jorge Nasimba
 * Fecha de creacion: Viernes, Noviembre 1, 2021 5:12:46 PM
 * Fecha de modificacion: Viernes, Octubre 29, 2021 6:30:14 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/

int main(int argc, char** argv) {
	Datos<int> a,b,c;
	Datos<double>d,e,f;
	Operaciones<int> op; 
	Operaciones<double>opr;
	cout<<"\t\tEcuacion de segundo grado";
	cout<<"\nCon datos enteros\n";
	a.setDato(1);
	b.setDato(-1);
	c.setDato(-6);	
	op.calcular_raices(a.getDato(),b.getDato(),c.getDato());
	cout<<"\nCon datos decimales\n";
	d.setDato(0.20);
	e.setDato(0.80);	
	f.setDato(0.33);
	opr.calcular_raices(d.getDato(),e.getDato(),f.getDato());
	return 0;
}

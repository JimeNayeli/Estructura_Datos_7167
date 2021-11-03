#include <iostream>
#include "Coordenada.h"
#include "Coordenada.cpp"
#include "Operacion.h"
#include "Operacion.cpp"
using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Distancia entre 2 puntos
 * Autor:   Jorge Nasimba
 * Fecha de creacion: Viernes, Noviembre 2, 2021 7:46:13 PM
 * Fecha de modificacion: Viernes, Noviembre 2, 2021 20:24:06 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/



int main(int argc, char** argv) {
	
	Coordenada<int> p1(2,3),p2(4,5);
	Coordenada<double> p3(4.6,5.2),p4(5.9,4.2);
	Operacion<double>op;
	
	cout<<"\t\tDistancia entre 2 puntos (x,y)\n";
	cout<<"(x,y) enteros\n";
	cout<<op.calcular_distancia(p1.getX(),p1.getY(),p2.getX(),p2.getY())<<"\n";
	cout<<"(x,y) decimales\n";
	cout<<op.calcular_distancia(p3.getX(),p3.getY(),p4.getX(),p4.getY());
	return 0;
}

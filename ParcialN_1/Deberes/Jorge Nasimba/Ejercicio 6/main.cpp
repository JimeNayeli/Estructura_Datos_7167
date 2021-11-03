#include <iostream>
#include "Cono.h"
#include "Cono.cpp"
#include "Operacion.h"
#include "Operacion.cpp"
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
	Cono <int> cono(4,5);
	Cono <double> cono1(4.50,6.82);
	Operacion<int> op;
	Operacion<double> opr;	
	cout<<"\t\t\tVolumen de un cono\n";
	cout<<"Radio y Altura enteros\n";
	cout<<"\nR: "<<cono.getR()<<"  H: "<<cono.getH();	
	cout<<"\nV: "<<op.calcular_volumen(cono.getR(),cono.getH());
	cout<<"\nRadio y Altura decimales\n";
	cout<<"\nR: "<<cono.getR()<<"  H: "<<cono.getH();
	cout<<"\nV: "<<opr.calcular_volumen(cono1.getR(),cono1.getH());
	return 0;
}

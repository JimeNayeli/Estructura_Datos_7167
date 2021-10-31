#include <iostream>
#include <stdlib.h>
#include "Esfera.cpp"

/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Autor:Jimena Tutillo
 * Fecha de creacion: Sabado, October 30, 2021 5:49:23 PM
 * Fecha de modificacion: Sabado, October 30, 2021 11:10:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
 Programa: Volumen de una esfera
 ***********************************************************************/
using namespace std;
int main(){
	Esfera<int> entero;
	Esfera<float> flotante;
	Esfera<double> real;
	entero.setRadio(1);
	flotante.setRadio(10.5f);
	real.setRadio(39.7608);

	cout<<"(Entero)Volumen de la esfera de radio 1: "<<calcularVolumen(entero.getRadio())<<" m^3"<<endl;
	cout<<"(Flotante)Volumen de la esfera de radio 10.5: "<<calcularVolumen(flotante.getRadio())<<" m^3"<<endl;
	cout<<"(Double)Volumen de la esfera de radio 39.7608: "<<calcularVolumen(real.getRadio())<<" m^3"<<endl;

	
	return 0;
}

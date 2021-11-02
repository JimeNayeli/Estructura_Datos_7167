#include <iostream>
#include <stdlib.h>
#include "Triangulo.cpp"


/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Autor:Jimena Tutillo
 * Fecha de creacion: Martes, Noviembre 2, 2021 1:30:23 PM
 * Fecha de modificacion: Martes, Noviembre 2, 2021 2:50:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
 Programa: Encontrar el angulo en radianes dada la hipotenusa y el cateto opuesto 
 ***********************************************************************/
 using namespace std;
int main() {
	
	Triangulo<float> object1(14.7,18);	
	cout<<"\n\tEl angulo en radianes es:"<<object1.obtenerAngulo(object1.getCatetoO(),object1.getHipotenusa());
	Triangulo<double> object2(10.7,21.097);	
	cout<<"\n\tEl angulo en radianes es:"<<object2.obtenerAngulo(object2.getCatetoO(),object2.getHipotenusa());

	
	return 0;
}

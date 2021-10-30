#include <iostream>
#include <stdlib.h>
#include "Potencia.cpp"
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Autor:Jimena Tutillo
 * Fecha de creacion: Viernes, October 29, 2021 5:49:23 PM
 * Fecha de modificacion: Viernes, October 29, 2021 11:10:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
 Potencia a la 2 de un numero 
 ***********************************************************************/
using namespace std;
int main(){
	Potencia<int> entero;
	Potencia<float> flotante;
	Potencia<double> real;
	entero.setNum(8);
	flotante.setNum(13.5f);
	real.setNum(22.5678);
	
	cout<<"(Entero)La potencia de 8: "<<calcularPotencia(entero.getNum())<<endl;
	cout<<"(Flotante)La potencia de 13.5: "<<calcularPotencia(flotante.getNum())<<endl;
	cout<<"(Double)La potencia de 22.5678: "<<calcularPotencia(real.getNum())<<endl;

	
	return 0;
}

#include <iostream>
#include <stdlib.h>
#include "Numero.cpp"


/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Autor:Jimena Tutillo
 * Fecha de creacion: Domingo, October 31, 2021 2:21:23 PM
 * Fecha de modificacion:Domingo, October 31, 2021 3:34:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
 Programa: Validar si un numero pertenece a un rango de 99-507
 ***********************************************************************/
using namespace std;
int main(){
	Numero<int> entero;
	Numero<float> flotante;
	Numero<double> real;
	entero.setNum(1);
	flotante.setNum(70.5f);
	real.setNum(109.7608);
	//Datos quemados;
	if(pertenecerRango(flotante.getNum())==1)
		cout<<"\n\tEl numero "<<flotante.getNum()<<" pertenece al rango"<<endl;
	else
		cout<<"\tEl numero "<<flotante.getNum()<<" No pertenece al rango"<<endl;
	//Datos recibidos
	
	double num;
	cout<<"\n\tIngresar numero para evaluar: ";
	cin>>num;
	if(pertenecerRango(num)==1)
		cout<<"\tEl numero "<<num<<" pertenece al rango"<<endl;
	else
		cout<<"\tEl numero "<<num<<" No pertenece al rango"<<endl;
	
	return 0;
}

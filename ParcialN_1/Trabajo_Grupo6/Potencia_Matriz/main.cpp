 
#include <iostream>
#include "Matriz.cpp"
#include "Operacion.cpp"

/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Programa: Potencia de matriz
 * Autor:Paul Chillagana, Jorge Nacimba, Jimena Tutillo
 * Fecha de creacion: Miercoles, Noviembre 13, 2021 4:10:23 PM
 * Fecha de modificacion: Miercoles, Noviembre 13, 2021 5:50:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
***********************************************************************/

using namespace std;

int main(){
	Matriz mat,matR;
	Operacion op;
	int dim,pot;
	cout<<"\tMATRIZ\n";
	cout<<"Ingrese la dimension:";
	cin>>dim;
	cout<<"Ingrese la potencia:";
	cin>>pot;
	mat.setMat(op.segmentar(dim));
	op.encerar(mat,dim);
	op.ingresar(mat,dim);
	cout<<"\n";
	op.imprimir(mat,dim);
	matR.setMat(op.segmentar(dim));
	op.encerar(matR,dim);
	op.calcularPotencia(mat,matR,dim,pot);
	cout<<"\n";
	op.imprimir(matR,dim);
	return 0;
}
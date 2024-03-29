#include <iostream>
#include <stdlib.h>
#include "Matriz.cpp"
#include "Operacion.cpp"
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Programa: Multiplicacion de Matriz
 * Autor:Paul Chillagana, Jorge Nacimba, Jimena Tutillo
 * Fecha de creacion: Miercoles, Noviembre 13, 2021 4:10:23 PM
 * Fecha de modificacion: Miercoles, Noviembre 13, 2021 5:50:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
***********************************************************************/

using namespace std;

int main(){
	Matriz mat,mat2,matR;
	Operacion op;
	int fila, col, fila2,col2;
	cout<<"\tPRIMERA MATRIZ\n";
	cout<<"Ingrese fila:";
	cin>>fila;
	cout<<"Ingrese columna:";
	cin>>col;
	mat.setMat(op.segmentar(fila,col));
	op.encerar(mat,fila,col);
	op.ingresar(mat,fila,col);
	cout<<"\n";
	op.imprimir(mat,fila,col);
	cout<<"\tSEGUNDA MATRIZ\n";
	cout<<"Ingrese fila:";
	cin>>fila2;
	cout<<"Ingrese columna:";
	cin>>col2;
	mat2.setMat(op.segmentar(fila2,col2));
	op.encerar(mat2,fila2,col2);
	op.ingresar(mat2,fila2,col2);
	cout<<"\n";
	op.imprimir(mat2,fila2,col2);
	matR.setMat(op.segmentar(fila,col2));
	op.encerar(matR,fila,col2);
	op.procesar(mat,mat2,matR,fila,col,col2);
	cout<<"\n";
	op.imprimir(matR,fila,col2);
	return 0;
}

#include "Matriz.h"
#pragma once
#include <iostream>

/* ********************************************** **********************
 * Universidad de las Fuerzas Armadas ESPE
 * Plantilla de el ejercicio Matriz
 * Integrantes: Paul Chillagana, Jorge Nasimba, Jimena Tutillo
 * Fecha de creacion: Domingo, 14 de noviembre de 2021 11:30:23 PM
 * Fecha de modificacion: Domingo, 14 de noviembre de 2021 13:10:58 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
*********************************************** ******************** */
int main(int argc, char** argv) {
	int **mat,**mat2,**matR;
	int fila,col,fila2,col2;
	cout<<"\tPrimera matriz: \n";
	cin>>fila;
	cin>>col;
	ingresar(mat,fila,col);	
	cout<<"\tSegunda matriz: \n";
	cin>>fila2;
	cin>>col2;
	ingresar(mat2,fila2,col2);
	cout<<"\t Matriz resultante: \n";
	if(validar(fila,col2))
		procesar(mat,mat2,matR,fila,col,col2);
	else
		cout<<"No se puede calcular";	
	return 0;
}
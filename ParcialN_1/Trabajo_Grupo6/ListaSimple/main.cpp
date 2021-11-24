#pragma once
#include <iostream>
#include "Lista.cpp"
#include "Nodo.cpp"
using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Programa: Listas 
 * Autor:Paul Chillagana, Jorge Nacimba, Jimena Tutillo
 * Fecha de creacion: Domingo, Noviembre 23, 2021 8:10:23 PM
 * Fecha de modificacion: Domingo, Noviembre 23, 2021 10:50:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
***********************************************************************/
int main(int argc, char** argv) {
	Lista lst;
	Nodo *lista= NULL;
	lst.insertar(10);
	lst.insertar(1);
	lst.insertar(13);
	lst.insertar(23);
	lst.insertar(33);
	lst.insertar(0);
	lst.insertar(0);

	lst.mostrar();
//	lst.eliminar_busqueda(13);
	//lst.Borrar(lista,23);
	cout<<"\n";
//	lst.Borrar(lista,13);
	lst.mostrar();

	
	return 0;
}

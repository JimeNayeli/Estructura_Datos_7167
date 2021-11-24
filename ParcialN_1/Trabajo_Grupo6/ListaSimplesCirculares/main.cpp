#include <iostream>
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Programa: Lista Circular Doblemente Enlazada
 * Integrantes:  Paul Chillagana, Jorge Nasimba, Jimena Tutillo
 * Fecha de creacion: Martes, Noviembre 23, 2021 7:50:23 PM
 * Fecha de modificacion: Martes, Noviembre 23, 2021 11:10:58 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/

#include "listaSimple.cpp"
int main(int argc, char** argv) {
	ListaSimple ls;
	ls.insertar(10);
	ls.insertar(20);
	ls.insertar(50);


	ls.mostrar();
	ls.eliminar(1);
	ls.mostrar();
	return 0;
}

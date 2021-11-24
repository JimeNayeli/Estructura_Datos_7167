#include <iostream>
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Programa: Listas 
 * Autor:Paul Chillagana, Jorge Nacimba, Jimena Tutillo
 * Fecha de creacion: Domingo, Noviembre 23, 2021 8:10:23 PM
 * Fecha de modificacion: Domingo, Noviembre 23, 2021 10:50:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
***********************************************************************/
	#include "lista.cpp"

	

	int main(){
		lista Lista;
		Lista.Insertar(20);
		Lista.Insertar(10);
		Lista.Insertar(40);
		Lista.Insertar(30);
		Lista.Mostrar(ASCENDENTE);
		Lista.Mostrar(DESCENDENTE);
		Lista.Primero();
		cout << "Primero: " << Lista.ValorActual() << endl;
		Lista.Ultimo();
		cout << "Ultimo: " << Lista.ValorActual() << endl;
		Lista.Borrar(10);

			Lista.Borrar(25);
			Lista.Borrar(45);
			Lista.Borrar(30);
			Lista.Mostrar(ASCENDENTE);
			Lista.Mostrar(DESCENDENTE);
			cin.get();
			
			
			return 0;

	
	
}

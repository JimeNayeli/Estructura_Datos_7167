#include <iostream>
#include "Operacion.cpp"
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Programa: Recursividad-Hanoi
 * Autor:Paul Chillagana, Jorge Nacimba, Jimena Tutillo
 * Fecha de creacion: Miercoles, Noviembre 18, 2021 8:10:23 PM
 * Fecha de modificacion: Miercoles, Noviembre 18, 2021 8:50:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
***********************************************************************/
int main(int argc, char** argv) {
	Hanoi ha;
	int num;
	cout<<"\nDiscos A, B, C\n";
	cout<<"\nIngrese el numero de discos ";
	cin>>num;
	cout<<"\nNumeros de movimientos: "<<ha.contar(num)<<"\n\n";
	ha.hanoi(num,'A','B','C');
	return 0;
	
}
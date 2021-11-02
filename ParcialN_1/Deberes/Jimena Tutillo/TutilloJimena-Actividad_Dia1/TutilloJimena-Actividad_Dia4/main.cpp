#include <iostream>
#include <stdlib.h>
#include "Matriz.cpp"


/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Autor:Jimena Tutillo
 * Fecha de creacion: Lunes, Noviembre 1, 2021 3:21:23 PM
 * Fecha de modificacion:Lunes, Noviembre 1, 2021 5:34:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 
 Programa: Multiplicar una matriz por cualquier numero
 ***********************************************************************/
int main() {
	
	int matriz[3][3];
	Matriz<int> entero;
	Matriz<float> flotante;
	Matriz<double> real;
	entero.setValor(6);
	flotante.setValor(70.3f);
	real.setValor(109.7608);
	
	for(int i=1;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			matriz[i][j]=i+entero.getValor();
		}
	}
	imprimir(matriz);
	for(int i=1;i<4;i++)
	{
		printf("\nsuma fila: %ld-->%ld",i,sumar(matriz[i]));	
	}
	

	
	return 0;
}

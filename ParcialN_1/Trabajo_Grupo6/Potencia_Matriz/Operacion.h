#include "Matriz.h"
#pragma once
#include <iostream>
using namespace std;
class Operacion{
	public:
	int **segmentar(int);
    void encerar(Matriz,int);
	void ingresar(Matriz,int);
    void imprimir(Matriz, int);
	void procesar(Matriz,Matriz,Matriz, int);
	void calcularPotencia(Matriz, Matriz, int, int);
	void copiarMatriz(Matriz, Matriz, int);
	private:
	
};
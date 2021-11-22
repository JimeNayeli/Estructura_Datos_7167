#pragma once
#include "Nodo.h"
using namespace std;
class Lista{
private:
	Nodo* primero;
	Nodo* actual;
public:
	bool listaVacia(); 
	Lista();
	void insertarPorCola(int);
	void insertarPorCabeza(int);
	void borrarPorCola();
	void borrarPorCabeza();
	void mostrar();
};

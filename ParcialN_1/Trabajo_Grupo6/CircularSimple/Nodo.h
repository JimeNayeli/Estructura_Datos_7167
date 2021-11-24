#pragma once
#include <iostream>
class Nodo
{
private:
	int valor;
	Nodo* siguiente;
public:
	Nodo(int val, Nodo* sig)
	{
		this->valor = val;
		this->siguiente = sig;
	}
	void setSiguiente(Nodo* sig) { siguiente = sig; }
	Nodo* getSiguiente() { return siguiente; }
	int getValor() { return valor; }
	friend class ListaSimple;
};

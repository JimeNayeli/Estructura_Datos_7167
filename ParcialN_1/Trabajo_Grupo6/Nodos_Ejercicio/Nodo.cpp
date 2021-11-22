#include "Nodo.h"

Nodo::Nodo(int val, Nodo* sig = NULL)
{
	this->dato = val;
	this->siguiente = sig;
}

int Nodo::getDato()
{
	return this->dato;
}

void Nodo::setDato(int val)
{
	this->dato = val;
}

Nodo* Nodo::getSiguiente()
{
	return this->siguiente;
}

void Nodo::setSiguiente(Nodo* nuevo)
{
	this->siguiente = nuevo;
}

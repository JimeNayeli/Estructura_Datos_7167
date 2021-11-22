#include "Lista.h"
bool Lista::listaVacia()
{
	return (this->primero == NULL);
}

Lista::Lista()
{
	this->primero = NULL;
	this->actual = NULL;
}

void Lista::insertarPorCola(int val)
{
	Nodo* nuevo = new Nodo(val,NULL);
	if (listaVacia()) {
		this->primero = nuevo;
	}
	else {
		this->actual->setSiguiente(nuevo);
	}
	this->actual = nuevo;
}

void Lista::insertarPorCabeza(int val)
{
	Nodo* nuevo = new Nodo(val, NULL);

	if (listaVacia()) {
		this->actual = nuevo;
	}
	else {
		nuevo->setSiguiente(this->primero);
	}
	this->primero = nuevo;
}

void Lista::borrarPorCola()
{
	if (!listaVacia()) {
		Nodo* temp = this->actual;
		Nodo* temp1 = this->primero;
		while (temp1->getSiguiente()->getSiguiente() != NULL) {
			temp1 = temp1->getSiguiente();
		}
		temp1->setSiguiente(NULL);
		this->actual = temp1;
		free(temp);
	}
}

void Lista::borrarPorCabeza()
{
	if (!listaVacia()) {
		Nodo* temp;
		temp = this->primero;
		this->primero = this->primero->getSiguiente();
		free(temp);
	}
}		

void Lista::mostrar()
{
	Nodo* temporal = this->primero;
	//la direccion le apunta a primero
	while (temporal) {
		cout << temporal->dato << "->";
		temporal = temporal->siguiente;

	}
	cout << "NULL\n";
}

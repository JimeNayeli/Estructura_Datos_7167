#include <iostream>
#include "ListaSimple.h"
void ListaSimple::insertar(int val)
{
	Nodo* nuevo = new Nodo(val, NULL);
	if (ListaSimple::listaVacia())
	{
		this->primero = nuevo;
	}
	else
	{
		actual->setSiguiente(nuevo);
	}
	actual = nuevo;
	dimLista++;
}
void ListaSimple::insertarPorCabeza(int val) {
	Nodo* nuevo = new Nodo(val, NULL);
	if (ListaSimple::listaVacia())
	{
		this->actual= nuevo;
	}
	else
	{
		nuevo->setSiguiente(this->primero);
	}
	primero = nuevo;
	dimLista++;


}
void ListaSimple::mostrar()
{
	Nodo* tmp = primero;
	int indice = 0;
	mostrarRecursivo(tmp, indice);
}
void ListaSimple::mostrarRecursivo(Nodo* valor, int indice) {
	valor = obtenerNodo(indice);
	std::cout << "Indice: " << indice++ << " Valor: " << valor->getValor() << std::endl;
	if (indice < dimLista)
		mostrarRecursivo(valor->getSiguiente(), indice++);
}
void ListaSimple::eliminar(int indice)
{
	if (!listaVacia()) {
		Nodo* actual = obtenerNodo(indice - 1);
		Nodo* tmp = obtenerNodo(indice + 1);
		actual->setSiguiente(tmp);
		dimLista--;
	}
}
void ListaSimple::eliminarPorCabeza()
{
	if (!listaVacia()) {
		Nodo* tmp = this->primero;
		this->primero = this->primero->getSiguiente();
		free(tmp);
		dimLista--;
	}
}
void ListaSimple::eliminarPorCola()
{
	if (!listaVacia()) {
		Nodo* tmp = this->actual;
		Nodo* tmp1 = this->primero;
		while (tmp1->getSiguiente()->getSiguiente() != NULL) {
			tmp1=tmp1->getSiguiente();
		}
		tmp1->setSiguiente(NULL);
		this->actual = tmp1;
		free(tmp);
		dimLista--;
	}
}

Nodo* ListaSimple::obtenerNodo(int indice)
{
	int cont = 0;
	Nodo* tmp = primero;
	while (tmp->getSiguiente() != nullptr)
	{
		if (cont == indice)
		{
			break;
		}
		cont++;
		tmp = tmp->getSiguiente();
	}
	return tmp;
}
void ListaSimple::insertarEn(int indice, int val)
{
	Nodo* nuevo = new Nodo(val, primero);
		Nodo* actual = obtenerNodo(indice - 1);
		Nodo* tmp = actual->getSiguiente();
		actual->setSiguiente(nuevo);
		actual = actual->getSiguiente();
		actual->setSiguiente(tmp);
		dimLista++;
}
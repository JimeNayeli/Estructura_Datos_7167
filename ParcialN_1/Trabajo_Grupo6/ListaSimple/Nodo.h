#pragma once
#include <iostream>

class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo(int, Nodo *);
		void setValor(int);
		int getValor();
		void setSiguiente(Nodo*);
		Nodo* getSiguiente();
	friend class Lista;
};
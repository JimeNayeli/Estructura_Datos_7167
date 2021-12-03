#ifndef NODO_H
#define NODO_H
#include<stdlib.h>
#include "Cuenta.h"

class Nodo
{
	public:
		Nodo(Cuenta cuenta){
		this->cuenta = cuenta;
		this->siguiente=NULL;
		this->anterior=NULL;
	}
		Nodo(){
		this->siguiente=NULL;
		this->anterior=NULL;
	}
		~Nodo();
		Nodo *getSiguiente();
		Nodo *getAnterior();
		void setSiguiente(Nodo *_siguiente);
		void setAnterior(Nodo *_anterior);
		void setCuenta(Cuenta c);
		Cuenta getCuenta(){
			return cuenta;
		}
	protected:
		
	private:
		Cuenta cuenta;
		Nodo *siguiente;
		Nodo *anterior;
};

#endif
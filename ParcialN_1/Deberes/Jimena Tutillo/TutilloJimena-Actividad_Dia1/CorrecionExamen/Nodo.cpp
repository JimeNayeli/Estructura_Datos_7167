#pragma once
#include "Nodo.h"



Nodo::~Nodo(){

}

Nodo *Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente){
	siguiente = _siguiente;
}
Nodo *Nodo::getAnterior() {
	return anterior;
}

void Nodo::setAnterior(Nodo *_anterior){
	anterior = _anterior;
}

void Nodo::setCuenta(Cuenta _cuenta){
	cuenta = _cuenta;
}


#include <iostream>
#include "Nodo.h"
#include <stdlib.h>

Nodo::Nodo(int val, Nodo *sig){
	this->valor = val;
	this->siguiente = sig;
	
}

void Nodo::setSiguiente(Nodo *sig) {
 siguiente = sig;
}
Nodo* Nodo::getSiguiente()  { 
	return siguiente;
}
int Nodo:: getValor() {
 return valor; 
 }
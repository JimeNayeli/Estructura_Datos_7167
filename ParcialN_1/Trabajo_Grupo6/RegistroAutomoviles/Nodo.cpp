#include "Nodo.h"

Nodo::Nodo(Persona _persona){
	persona = _persona;
	this->siguiente=NULL;
	this->anterior=NULL;
}
Nodo::Nodo(){
	this->siguiente=NULL;
	this->anterior=NULL;
}
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

void Nodo::setPersona(Persona _persona){
	persona = _persona;
}

Persona Nodo::getPersona(){
	return persona;
}
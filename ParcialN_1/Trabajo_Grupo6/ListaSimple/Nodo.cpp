#include <iostream>
#pragma once
#include "Nodo.h"


	 Nodo::Nodo(int val, Nodo*sig=NULL){
			this->valor=val;
			this->siguiente=sig;
	}

	void Nodo::setValor(int val){
		this->valor=val;
	}

	 Nodo::getValor(){
		return this->valor;
	}

	void Nodo::setSiguiente(Nodo* sig){
		this->siguiente=sig;
	}
		Nodo* Nodo:: getSiguiente(){
			return this->siguiente;
		}
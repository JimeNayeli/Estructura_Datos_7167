#include "Datos.h"
#include <iostream>
template <typename T >
void Datos<T>::setDato(T d)
{
	this->dato=d;
}

template <typename T>
T Datos<T>::getDato() const
{
	return this->dato;
}

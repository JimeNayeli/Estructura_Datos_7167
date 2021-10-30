#include "Lado.h"
#include <iostream>
template <typename T >
void Lado<T>::setLado(T n)
{
	this->lado=n;
}

template <typename T>
T Lado<T>::getLado() const
{
	return this->lado;
}

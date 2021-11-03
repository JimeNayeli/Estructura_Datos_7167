#include "Coordenada.h"
#include <iostream>
template <typename T>
void Coordenada<T>::setX(T x)
{
	this->lado=x;
}

template <typename T>
T Coordenada<T>::getX() const
{
	return this->x;
}

template <typename T>
void Coordenada<T>::setY(T y)
{
	this->lado=y;
}

template <typename T>
T Coordenada<T>::getY() const
{
	return this->y;
}
template <typename T>
Coordenada<T>::Coordenada(T px, T py)
{
   x=px;
   y=py;
}

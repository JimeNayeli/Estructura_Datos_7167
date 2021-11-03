#include "Cono.h"
#include <iostream>
template <typename T>
void Cono<T>::setR(T r)
{
	this->lado=r;
}

template <typename T>
T Cono<T>::getR() const
{
	return this->r;
}

template <typename T>
void Cono<T>::setH(T h)
{
	this->lado=h;
}

template <typename T>
T Cono<T>::getH() const
{
	return this->h;
}
template <typename T>
Cono<T>::Cono(T rad, T alt)
{
   r=rad;
   h=alt;
}
 

/***********************************************************************
 * Module:  Complejo.cpp
 * Author:  WISTAR
 * Modified: viernes, 5 de noviembre de 2021 10:07:23
 * Purpose: Implementation of the class Complejo
 ***********************************************************************/

#include "Complejo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::getReal()
// Purpose:    Implementation of Complejo::getReal()
// Return:     T
////////////////////////////////////////////////////////////////////////
template <class T>
T Complejo<T>::getReal(void)
{
   return real;
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::setReal(T newReal)
// Purpose:    Implementation of Complejo::setReal()
// Parameters:
// - newReal
// Return:     void
////////////////////////////////////////////////////////////////////////
template <class T>
void Complejo<T>::setReal(T newReal)
{
   real = newReal;
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::getImg()
// Purpose:    Implementation of Complejo::getImg()
// Return:     T
////////////////////////////////////////////////////////////////////////
template <class T>
T Complejo<T>::getImg(void)
{
   return img;
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::setImg(T newImg)
// Purpose:    Implementation of Complejo::setImg()
// Parameters:
// - newImg
// Return:     void
////////////////////////////////////////////////////////////////////////
template <class T>
void Complejo<T>::setImg(T newImg)
{
   img = newImg;
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::Complejo(T real, T img)
// Purpose:    Implementation of Complejo::Complejo()
// Parameters:
// - real
// - img
// Return:     
////////////////////////////////////////////////////////////////////////
template <class T>
Complejo<T>::Complejo(T real, T img)
{
    this->real=real;
	this->img=img;
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::~Complejo()
// Purpose:    Implementation of Complejo::~Complejo()
// Return:     
////////////////////////////////////////////////////////////////////////
template <class T>
Complejo<T>::~Complejo()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::operator-(const Complejo<T> &A)
// Purpose:    Implementation of Complejo::operator-()
// Parameters:
// - &A
// Return:     Complejo<T>&
////////////////////////////////////////////////////////////////////////
template <class T>
Complejo<T>& Complejo<T>::operator+(const Complejo<T> &A)
{
   	this->img+= A.img;
	this->real+= A.real;
	return *this;
}

////////////////////////////////////////////////////////////////////////
// Name:       Complejo::operator_-(const Complejo<T> &A)
// Purpose:    Implementation of Complejo::operator_-()
// Parameters:
// - &A
// Return:     Complejo<T>&
////////////////////////////////////////////////////////////////////////
template <class T>
Complejo<T>& Complejo<T>::operator-(const Complejo<T> &A)
{
   	this->img-= A.img;
	this->real-= A.real;
	return *this;
}

template class Complejo<int>;
template class Complejo<float>;
template class Complejo<double>;

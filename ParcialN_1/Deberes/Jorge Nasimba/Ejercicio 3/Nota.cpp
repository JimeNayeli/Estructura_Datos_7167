#include "Nota.h"
#include <iostream>
using namespace std;
template <typename T >
void Nota<T>::setNota(T n)
{
	this->nota=n;
}

template <typename T>
T Nota<T>::getNota() 
{
	return this->nota;
}


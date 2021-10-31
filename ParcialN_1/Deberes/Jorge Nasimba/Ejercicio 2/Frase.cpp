#include "Frase.h"
#include <iostream>
using namespace std;
template <typename T >
void Frase<T>::setFrase(T f)
{
	this->frase=f;
}

template <typename T>
T Frase<T>::getFrase() 
{
	return this->frase;
}

template <typename T>
void Frase<T>::toString(T f)
{
	cout<<f;
}

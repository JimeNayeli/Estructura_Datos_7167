#include "Fraccion.h"
#include <iostream>

template <typename T>
T Fraccion<T>::getNumerador()const
{
   return numerador;
}


template <typename T>
void Fraccion<T>::setNumerador(T newNumerador)
{
   numerador = newNumerador;
}


template <typename T>
T Fraccion<T>::getDenominador()const
{
   return denominador;
}


template <typename T>
void Fraccion<T>::setDenominador(T newDenominador)
{
   denominador = newDenominador;
}


template <typename T>
Fraccion<T>::Fraccion(T num, T den)
{
   numerador=num;
   denominador=den;
}


template <typename T>
Fraccion<T>::~Fraccion()
{
   // TODO : implement
}


#include "Esfera.h"
#include <math.h>
template <typename T>
void Esfera<T>::setRadio(T n){
	this->radio=n;
}
template <typename T>
T Esfera<T>::getRadio() const{
	return this->radio;
}
template <typename T>
T calcularVolumen(T radio){
	T const pi = acos(-T(1));
	T const n= T(1)/T(3);
	return pi*n*pow(radio,3); 
}



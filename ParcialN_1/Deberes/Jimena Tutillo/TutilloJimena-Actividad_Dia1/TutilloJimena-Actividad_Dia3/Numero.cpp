#include "Numero.h"

template <typename T>
void Numero<T>::setNum(T n){
	this->num=n;
}
template <typename T>
T Numero<T>::getNum() const{
	return this->num;
}
template <typename T>
bool pertenecerRango(T num){
	if(num>=99 && num<=509)
		return true; 
	return false;
}




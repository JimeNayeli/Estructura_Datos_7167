#include "Triangulo.h"
#include <Math.h>

template<typename T>
void Triangulo<T>::setHipotenusa(T n){
	this->hipotenusa=n;
}
template <typename T>
T Triangulo<T>::getHipotenusa() const{
	return this->hipotenusa;
}
template<typename T>
void Triangulo<T>::setCatetoO(T n){
	this->catetoO=n;
}
template <typename T>
T Triangulo<T>::getCatetoO() const{
	return this->catetoO;
}
template <typename T>
T Triangulo<T>:: obtenerAngulo(T cateto, T hipotenusa){
	return asin(cateto/hipotenusa);
}


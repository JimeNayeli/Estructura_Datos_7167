#include "Potencia.h"
#include <math.h>
template <typename T>
void Potencia<T>::setNum(T n){
	this->num=n;
}
template <typename T>
T Potencia<T>::getNum() const{
	return this->num;
}
template <typename T>
T calcularPotencia(T num){
	return pow(num,2); 
}

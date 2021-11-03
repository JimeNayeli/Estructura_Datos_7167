#include "Pitagoras.h"
#include <Math.h>

template<typename T>
void Pitagoras<T>::setCatetoOpuesto(T n){
	 this.catetoOpuesto=n;
}
template<typename T>
void Pitagoras<T>::setCatetoAdyasente(T n){
	this.catetoAdyasente=n;
}
template<typename T>
T Pitagoras<T>::getCatetoAdyasente() const{
	return this->catetoAdyasente;
}
template<typename T>
T Pitagoras<T>::getCatetoOpuesto() const{
	return this->catetoOpuesto;
}
template<typename T>
T Pitagoras<T>:: calcularPitagoras(T catetoO,T catetoA){
	T suma=pow(catetoO,2)+pow(catetoA,2);
	return sqrt(suma);
}

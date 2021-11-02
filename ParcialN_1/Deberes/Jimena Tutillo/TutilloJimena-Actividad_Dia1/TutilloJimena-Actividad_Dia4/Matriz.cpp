# include "Matriz.h"
template <typename T>
void Matriz<T>::setValor(T n){
	this->valor=n;
}
template <typename T>
T Matriz<T>::getValor() const{
	return this->valor;
}
template <typename T>
void Matriz<T>::setFila(T n){
	this->fila=n;
}
template <typename T>
T Matriz<T>::getFila() const{
	return this->fila;
}
template <typename T>
void Matriz<T>::setColumna(T n){
	this->columna=n;
}
template <typename T>
T Matriz<T>::getColumna() const{
	return this->columna;
}
template <typename T>
void imprimir(T m[3][3])
{
	for(int fila=1;fila<4;fila++)
	{
		printf("\n");
		for(int columna=1;columna<4;columna++)
		{
			printf("%6ld",m[fila][columna]);
		}
	}		
}
template <typename T>
T sumar(T v[])
{
	T suma=0;
	for(int fila=1;fila<4;fila++)
	{
		suma+=v[fila];	
	}
	return suma;
}

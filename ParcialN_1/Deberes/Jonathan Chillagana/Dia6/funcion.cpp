#include <iostream>

template <typename T>
T suma(T a, T b){
	return a+b;
}
template <typename T>
T resta(T a, T b){
	return a-b;
}
template <typename T>
T multiplicacion(T a, T b){
	return a*b;
}
template <typename T>
T division(T a, T b){
	if(b==0) return -1;
	return a/b;
}
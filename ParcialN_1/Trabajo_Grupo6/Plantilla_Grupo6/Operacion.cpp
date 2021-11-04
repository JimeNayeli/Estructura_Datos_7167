#include "Operacion.h"
#include "Fraccion.h"


template <typename T >
T Operacion<T>::numerador_resultante(T num1 ,T den1,T num2,T den2)
{
	return ((num1*den2)+(num2*den1));
}

template <typename T >
T Operacion<T>::denominador_resultante(T den1,T den2)
{
	return (den1+den2);
}

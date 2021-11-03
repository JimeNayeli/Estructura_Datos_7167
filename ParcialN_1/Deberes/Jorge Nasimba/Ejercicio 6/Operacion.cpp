#include "Cono.h"
#include <math.h>
#include "Operacion.h"
template <typename T >

T Operacion<T>::calcular_volumen(T r,T h)
{
    T volumen; 
    double pi=M_PI;
	volumen=pi*pow(r,2)*h;
	
	return volumen;
}

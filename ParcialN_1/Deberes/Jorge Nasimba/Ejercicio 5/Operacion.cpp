#include "Coordenada.h"
#include <math.h>
#include "Operacion.h"
#include <math.h>
template <typename T >

T Operacion<T>::calcular_distancia(T x1,T y1, T x2,T y2)
{
    double dist=0; 
	dist=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return dist;
}

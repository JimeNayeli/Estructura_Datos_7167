#include "Lado.h"
#include "Operacion.h"
#include <math.h>
template <typename T >

T Operacion<T>::calcular_area_entera(T ne)
{
    T area;
	Lado <int>l_entero;
    l_entero.setLado(ne);
    
	area=pow(l_entero.getLado(),2);
	return area;
}

template <typename T >
T Operacion<T>::calcular_area_flotante(T nf)
{
	T area;
	Lado <float> l_flotante;
    l_flotante.setLado(nf);
    
	area=pow(l_flotante.getLado(),2);
	return area;
}

#include "Datos.h"
#include <iostream>
#include "Operaciones.h"
#include <math.h>

using namespace std;

template <typename T >

T Operaciones<T>::calcular_radical(T a,T b,T c)
{
	T radical;
	radical=((b*b)-(4*a*c));
	if(radical<=0)
		return 0;
	else 
		return radical;
}

template <typename T >
void Operaciones<T>::calcular_raices(T a,T b,T c)
{
	T raiz1,raiz2;
	
	
	if(calcular_radical(a,b,c)==0)
	{
		cout<<"No existe solucion";
		exit(-1);
	}
	if(calcular_radical(a,b,c)!=0)
 	{
		raiz1=(-b+sqrt(calcular_radical(a,b,c)))/(2*a);
		raiz2=(-b-sqrt(calcular_radical(a,b,c)))/(2*a);
	}
	
	cout<<"Raiz 1: "<<raiz1<<" Raiz 2: "<<raiz2;
	
}

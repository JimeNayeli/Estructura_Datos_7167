#include "Nota.h"
#include "Operacion.h"
#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;

template <typename T >
T Operacion<T>::calcular_promedio()
{
	Nota <double> notas[5];
	double suma=0;
	double leer_nota=0;
    int tam;
    tam = sizeof(notas)/sizeof(notas[0]);
    
	for(int i=0;i<tam;i++)
	{
		do{	
		cout<<"Ingrese nota "<<i+1<<": ";
		cin>>leer_nota; 
		}while(!validar_notas(leer_nota));
		notas[i].setNota(leer_nota);
	}
	
	for(int j=0;j<tam;j++)
	{
		suma+=notas[j].getNota();
	}
	return suma/5;
}

template <typename T >
 bool Operacion<T>::validar_notas(T n)
{
	if(n<0 || n>10)
		return false;
	else
		return true;
}


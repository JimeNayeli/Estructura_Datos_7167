#include "Frase.h"
#include "Operacion.h"
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
template <typename T >

void Operacion<T>::contar_vocales(T frase)
{
	int a=0,e=0,i=0,o=0,u=0;
	
	for(int j=0;j<30;j++)
	{
		switch(frase[j])
		{
			case 'a': a++; break;	
			case 'e': e++; break;	
			case 'i': i++; break;	
			case 'o': o++; break;	
			case 'u': u++; break;	
		}	
	}
	cout<<"\na:"<<a;
	cout<<"\ne:"<<e;
	cout<<"\ni:"<<i;
	cout<<"\no:"<<o;
	cout<<"\nu:"<<u;
}

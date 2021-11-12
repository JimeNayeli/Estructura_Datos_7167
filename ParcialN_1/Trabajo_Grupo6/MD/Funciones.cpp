#include "Funciones.h"
#include <iostream>
using namespace std;

void Funciones::ingresar(int *p, int t)
{
	int i;

	for(i=0;i<t;i++)
	{
		printf("Ingrese el valor entero: ");
		scanf("%d",*(&p)+i);
	}
}

void Funciones:: imprimir(int *p, int t)
{
	int i;
	for(i=0;i<t;i++)
	{
		printf("\nValores ingresados: ");
		printf("%d",*(&(*p)));
		*(p++);//navegando por la direccion del puntero para extraer sus valores
	}
}

void Funciones:: procesar(int *p,int t)
{
	int i,e;
	printf("\nIngrese el escalar");
	scanf("%d",&e);
	for(i=0;i<t;i++)
	{
		*p=(*(&(*p)))*e;//operaciones con punteros
		*(p++);
	}
}
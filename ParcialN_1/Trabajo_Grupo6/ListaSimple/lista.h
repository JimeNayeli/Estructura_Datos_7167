#pragma once
#include "Nodo.h"
#include <iostream>

//typedef Nodo* pnodo;
using namespace std;


class Lista{
		
	private:
		Nodo *primero;
		Nodo *actual;
	//	Nodo *lista= NULL;
		//pnodo plista;
	
public:
			bool listaVacia();
			Lista();
			void insertar(int);
			void Borrar(Nodo *,int);
			void mostrar();
			void eliminar_busqueda( int b_num ) ;
			void setPrimero(Nodo *);
			void setActual(Nodo *);
			Nodo* getPrimero();
			Nodo* getActual();
};
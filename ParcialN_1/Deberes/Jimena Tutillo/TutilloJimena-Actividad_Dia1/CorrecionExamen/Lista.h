#ifndef LISTA_H
#define LISTA_H
#include "Nodo.cpp"
#include "Cuenta.h"
#include "Cuenta.cpp"
#include <stdlib.h>
#include <ctime>
#include <sstream>
using namespace std;

class Lista
{
	private:
		Nodo *primero;
		Nodo *ultimo;
	public:
		void insertarCola(Cuenta);
		void imprimir();
		void insertarCabeza(Cuenta);
		float descuento();
		float calcular();
		Lista(){
			this->primero=NULL;
			this->ultimo=NULL;
		}
		
		Nodo *getPrimero();

};

#endif
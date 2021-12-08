#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include "Persona.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <sstream>

class Lista
{
	private:
		Nodo *primero;
		Nodo *ultimo;
	public:
		void insertarCola(Persona persona);
		void imprimir();
		void insertarCabeza(Persona persona);
		Lista(){
			this->primero=NULL;
			this->ultimo=NULL;
		}
		Persona buscarPersona(string cedula);
		Nodo *getPrimero();
		std::string generarCorreo(Nodo* primero, Persona &persona);
		bool buscarDuplicado(string cedula);
		bool buscarDuplicadoPlaca(string placa);
		void archivo();
		

};

#endif
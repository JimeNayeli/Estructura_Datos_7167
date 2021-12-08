#ifndef NODO_H
#define NODO_H
#include "Persona.h"
class Nodo
{
	public:
		Nodo(Persona _persona);
		Nodo();
		~Nodo();
		Nodo *getSiguiente();
		Nodo *getAnterior();
		void setSiguiente(Nodo *_siguiente);
		void setAnterior(Nodo *_anterior);
		void setPersona(Persona _persona);
		Persona getPersona();
	protected:
		
	private:
		Persona persona;
		Nodo *siguiente;
		Nodo *anterior;
};

#endif
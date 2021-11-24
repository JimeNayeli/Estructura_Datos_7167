#include <iostream>


class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo(int val, Nodo *sig);
		void setSiguiente(Nodo *sig); 
		Nodo* getSiguiente(); 
		int getValor() ;
friend class Lista;
};
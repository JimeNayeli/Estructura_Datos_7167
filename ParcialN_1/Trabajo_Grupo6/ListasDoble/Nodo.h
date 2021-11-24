#include <iostream>
#define ASCENDENTE 1
#define DESCENDENTE 0
using namespace std;
class Nodo {
	public:
		Nodo(int v, Nodo* sig = NULL, Nodo* ant = NULL) :
		valor(v), siguiente(sig), anterior(ant) {}
	private:
		int valor;
		Nodo* siguiente;
		Nodo* anterior;
		friend class lista;
};
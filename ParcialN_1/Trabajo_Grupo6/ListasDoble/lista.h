#include "Nodo.h"
typedef Nodo* pnodo;
class lista {
	public:
		lista() : plista(NULL) {}
		~lista();
		void Insertar(int v);
		void Borrar(int v);
		bool ListaVacia() { return plista == NULL; }
		void Mostrar(int);
		void Siguiente();
		void Anterior();
		void Primero();
		void Ultimo();
		bool Actual() { return plista != NULL; }

		int ValorActual() { return plista->valor; }
	private:
		pnodo plista;
};
	




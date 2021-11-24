#include <iostream>

#include "listaSimple.cpp"
int main(int argc, char** argv) {
	ListaSimple ls;
	ls.insertar(10);
	ls.insertar(20);
	ls.insertar(50);


	ls.mostrar();
	ls.eliminar(1);
	ls.mostrar();
	return 0;
}
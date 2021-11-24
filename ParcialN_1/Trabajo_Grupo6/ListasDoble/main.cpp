#include <iostream>

	#include "lista.cpp"

	

	int main(){
		lista Lista;
		Lista.Insertar(20);
		Lista.Insertar(10);
		Lista.Insertar(40);
		Lista.Insertar(30);
		Lista.Mostrar(ASCENDENTE);
		Lista.Mostrar(DESCENDENTE);
		Lista.Primero();
		cout << "Primero: " << Lista.ValorActual() << endl;
		Lista.Ultimo();
		cout << "Ultimo: " << Lista.ValorActual() << endl;
		Lista.Borrar(10);

			Lista.Borrar(25);
			Lista.Borrar(45);
			Lista.Borrar(30);
			Lista.Mostrar(ASCENDENTE);
			Lista.Mostrar(DESCENDENTE);
			cin.get();
			
			
			return 0;

	
	
}
#pragma once

using namespace std;

class ListaD
{
	public:
		int id;
		ListaD *sig;
		ListaD *ant;
		void agregar(int);
		void presentar_I();	
		void presentar_F();	
};
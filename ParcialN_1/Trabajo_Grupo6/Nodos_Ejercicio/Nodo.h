#pragma once
class Nodo{
private:
	int dato;
	Nodo* siguiente;
public:
	Nodo(int, Nodo*);

	int getDato();
	void setDato(int);
	Nodo* getSiguiente();
	void setSiguiente(Nodo*);
	friend class Lista;
};

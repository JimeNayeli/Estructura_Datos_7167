#include <iostream>

#pragma once
#include "lista.h"
#include "Nodo.cpp"

using namespace std;

	bool Lista :: listaVacia(){
			return (this->primero==NULL);
	}

	Lista::Lista(){
				this->primero=NULL;
				this->actual=NULL;
	}

	void Lista::setPrimero(Nodo *pri){
		this->primero=pri;
		
		
	}

	void Lista::setActual(Nodo *act){
		this->actual=act;
	}

	Nodo* Lista:: getPrimero(){
		return this->primero;
	}

	Nodo* Lista:: getActual(){
		return this->actual;
	}

	void Lista:: insertar(int val){
			Nodo *nuevo=new Nodo(val);
			if(listaVacia()){
				this->primero=nuevo;
			}
			else{
				this->actual->siguiente=nuevo;
			}
			this->actual=nuevo;
		}

		void Lista ::mostrar(){
			Nodo *tmp=this->getPrimero();
			while(tmp){
				cout<<tmp->getValor()<<"-->";
				tmp=tmp->getSiguiente();
			}
			cout<<"NULL";
	}

	void Lista::Borrar(Nodo *lista, int v){
		if(lista!=NULL){
			Nodo *aux_borrar;
			Nodo *anterior= NULL;
			aux_borrar=lista;
		
		while((aux_borrar!=NULL)&&(aux_borrar->getValor()!=v)){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		if(aux_borrar==NULL){
			cout<<"Elemento no encontrado";
		}else if(anterior==NULL){
			lista=lista->getSiguiente();
			delete aux_borrar;
		}else{
			anterior->siguiente=aux_borrar->getSiguiente();
			delete aux_borrar;
		}
	}
}



	


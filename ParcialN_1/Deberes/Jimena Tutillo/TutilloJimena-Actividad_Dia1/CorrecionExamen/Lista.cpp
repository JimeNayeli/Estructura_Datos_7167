#include "Lista.h"

void Lista::insertarCabeza(Cuenta cuenta){
	
    Nodo *nuevo = new Nodo(cuenta);
    if(primero==NULL)
	{
		primero=nuevo;
		primero->setSiguiente(nuevo);
		primero->setAnterior(nuevo);
		ultimo=nuevo;
		
	}else{
		ultimo->setSiguiente(nuevo);
		nuevo->setSiguiente(primero);
		nuevo->setAnterior(ultimo);
		ultimo=nuevo;
		
	}
	ultimo->setSiguiente(primero);
}

void Lista::imprimir()
{
	if(primero!=NULL)
	{
		Nodo *auxiliar=primero;
		do{
			Cuenta cuenta = auxiliar->getCuenta();
			cout<<"\n";
			cout<<"\n Subtotal:" <<auxiliar->getCuenta().getValor();
			cout<<"\n Iva: "<<auxiliar->getCuenta().getValor()*0.12;
			cout<<"\n Total: "<<calcular();
			cout<<"\n Descuento: "<<descuento()*100;
            std::cout<<"\n-----------------------------------------\n";
            auxiliar = auxiliar->getSiguiente();
		}while(auxiliar!=primero);	
	}	
	else
	{
		cout<<"\nLista Vacia";
	}
    
}
float Lista::descuento(){
	Nodo* auxiliar=primero;
	Cuenta aux = auxiliar->getCuenta();
	float descuento;
	if(aux.getValor()>1 && aux.getValor()<=100)
		descuento= 0.05;
		else if(aux.getValor()>100 && aux.getValor()<=1000)
			descuento= 0.10;
			else
				descuento=0.15;
				
	return descuento; 	
}

float Lista::calcular(){
	Nodo* aux=primero;
	float total=0;
	if(primero!=NULL){
	total=aux->getCuenta().getValor()+aux->getCuenta().getValor()*0.12;
	total=total-(total*descuento());
		
	}
		
	return total; 	
}


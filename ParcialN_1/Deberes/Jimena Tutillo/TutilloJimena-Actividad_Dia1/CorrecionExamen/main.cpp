#include <iostream>
#include <stdlib.h>
#include "Lista.h"
#include "Lista.cpp"
#include "Nodo.h"
/* ********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Examen
 * Integrantes:Jimena Tutillo
 * Fecha de creacion: Miercoles, 1 de diciembre de 2021 11:30:23 PM
 * Fecha de modificacion: Miercoles, 1 de diciembre de 2021 13:10:58 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
********************************************************************/
using namespace std;

Cuenta agregar(Lista &lista);
int menu();
int main(int argc, char** argv) {
	fflush(stdin);
	int opcion;	
	bool repite = true;
	do{
		Lista lista;
		opcion = menu();
        switch(opcion){
        case 1:
            lista.insertarCabeza(agregar(lista));
            lista.imprimir();
            system("pause");
            break;
        case 0:{
        	cout << "\nGracias por utilizar nuestro programa" << endl;
            repite = false;
            system("pause");
			break;
			}
		}
	}while(repite);
	return 0;
}

Cuenta agregar(Lista &lista)
{

    float valor;
    cout<<"\nIngresar valor: ";
    cin>>valor;
    Cuenta cuenta(valor);
    fflush(stdin);
    
    return cuenta;
}
int menu(){
	int num;
	cout<<"\t1.Ingresar\n";
	cout<<"\t0.Salir\n";
	cout<<"\tIngrese una opcion: ";
	cin>>num;
	return num;
}

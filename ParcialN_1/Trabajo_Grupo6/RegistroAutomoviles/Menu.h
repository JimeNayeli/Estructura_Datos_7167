#if !defined(__Menu_h)
#define __Menu_h
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include "Persona.cpp"
#include "Lista.cpp"
#include "Nodo.cpp"
#include "procesos.h"
#include "Validacion.h"
using namespace std;

Persona agregarPersonas(Lista &lista);
class Menu {
public:
Menu() {

*(menuHead + 0) = "\tRegistrar";//0
*(menuHead + 1) = "\tMostrar";//1
*(menuHead + 2) = "\tBuscar";//2
*(menuHead + 3) = "\tArchivar";//3

*(menuHead + 4) = "\tSalir";//3

*(continuar + 0) = "Si";
*(continuar + 1) = "No";
}
~Menu(){
}
int menu() {
	int cursor = 0;
	char tecla;
	for (;;) {
	system("cls");
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 60);
	cout << "\t\t REGISTRO DE AUTOMOVILES \n" << endl;
	for (int i = 0; i < 5; i++) {
	if (cursor == i) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
	cout << *(menuHead + i) << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	else {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << *(menuHead + i) << endl;
	}
	}
	for (;;) {
	tecla = _getch();
	if (tecla == 80) {
	cursor++;
	if (cursor == 5) {
	cursor = 0;
	}
	break;
	}
	if (tecla == 72) {
	cursor--;
	if (cursor == -1) {
	cursor = 5;
		}
		break;
		}
			if (tecla == 13) {
			return cursor;
			}
		}
	}
}

void menuPrincipal()
{
    bool repite = true;
    int opcion,num;	
	Lista lista;
	do{
		opcion = menu();
        switch(opcion){
        case 0:
        	system("cls");
            lista.insertarCabeza(agregarPersonas(lista));
            system("pause");
            break;
        case 1:{
        	system("cls");
        	cout<<"\t\tDATOS INGRESADOS";
        	lista.imprimir();
            cout<<endl;
            system("pause");
			break;
		}
        case 2:{
        	system("cls");
        	string id;
        	cout<<"\t\tBUSCAR CLIENTE";
        	cout<<"\n\tIngrese cedula:  ";
        	cin>>id;
        	lista.buscarPersona(id);
        	system("pause>nul");
			break;
		}
   
        case 4:{
            cout << "\nGracias por utilizar nuestro programa" << endl;
            repite = false;
            system("pause>nul");
			break;
		}
		case 3:{
			lista.archivo();
			break;
		}
    }
     }while(repite);
}



private:
string* menuHead = new string[5];
string* continuar = new string[2];
};
#endif
Persona agregarPersonas(Lista &lista)
{
    char direccion[100];
	string primerNombre;
    string segundoNombre;
    string apellido;
    string placa;
    string dir;
    string telefono;
    int cedula;
    
    cout<<"\n\tREGISTRO DE INFORMACION \n\n";
    cout<<"Ingresar la cedula: ";
    cedula=ingresarEntero();
    fflush(stdin);
    while(!validarCedula(to_string(cedula)) || !lista.buscarDuplicado(to_string(cedula)))
    {
        if(!lista.buscarDuplicado(to_string(cedula))){
            cout<<"El numero de cedula ingresado ya se encuentra registrado, reingrese: ";
        }else{
            cout<<"Numero de cedula no valido, reingrese: ";
        }
        cin>>cedula;
    }
    cout<<"Ingrese el primer nombre: ";
    primerNombre = ingresarLetra();
    cout<<"Ingrese el segundo nombre: ";
    segundoNombre = ingresarLetra();
    cout<<"Ingrese su apellido: ";
    apellido= ingresarLetra();
    cout<<"Ingrese la direccion: ";
    fflush(stdin);
    cin.getline(direccion,100);
    cout<<"Ingrese el telefono: ";
    fflush(stdin);
    telefono = ingresarEnteroT();
    cout<<"Ingrese Placa: ";
    fflush(stdin);
    cin>>placa;
     while(!lista.buscarDuplicadoPlaca(placa))
    {
        if(!lista.buscarDuplicadoPlaca(placa)){
            cout<<"La placa ya esta ingresada, reingrese: ";
        }else{
            cout<<"No valido, reingrese: ";
        }
        cin>>placa;
    }
    
    Persona persona(to_string(cedula),primerNombre,segundoNombre,apellido,direccion,telefono,placa);
    cout<<"Se ha ingresado correctamente los datos"<<endl;

    return persona;
}

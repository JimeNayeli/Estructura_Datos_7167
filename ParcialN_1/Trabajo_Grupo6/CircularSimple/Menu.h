#pragma once
#include "ListaSimple.h"
#include <iostream>
using namespace std;
void menuPrincipal();
void menuAgregar(ListaSimple&);
void menuEliminar(ListaSimple&);
int menu();
int menu2();

int menu() {
    int opc;
    cout << "\n\t\t---------------------------------------";
    printf("\n\t\t|           Listas Circular Simple        |");
    cout << "\n\t\t---------------------------------------\n";
    printf("\t\n1. Insertar");
    printf("\t\n2. Eliminar ");
    printf("\t\n3. Imprimir");
    printf("\t\n0. Salir ");
    printf("\n\n\tElija una opcion: ");
    cin >> opc;
    return opc;
}
int menu2() {
    int opc;
    printf("\t\n1. Por la cabeza");
    printf("\t\n2. Por la cola ");
    printf("\t\n3. Por indice ");
    printf("\t\n0. Salir ");
    printf("\n\n\tElija una opcion: ");
    cin >> opc;
    return opc;
}

void menuPrincipal() {
    bool repite = true;
    int opc;
    ListaSimple lista;
    do {
        system("cls");
        opc = menu();
        switch (opc) {
        case 1:
            menuAgregar(lista);
            break;
        case 2:
            menuEliminar(lista);
            break;
        case 3:

            system("cls");
            lista.mostrar();
            system("pause>nul");
            break;
        case 0: {
            system("cls");
            cout << "\nGracias por utilizar nuestro programa";
            repite = false;
            system("pause>nul");
            break;
        }
        }
    } while (repite);
}

void menuAgregar(ListaSimple& lista)
{
    bool repite = true;
    int opc;
    int num,ind;
    ListaSimple lst;
    do {
        system("cls");
        opc = menu2();
        switch (opc) {
        case 1: {
            cout << "Ingrese numero= ";
            cin >> num;
            lista.insertar(num);
            system("pause");
            break;
        }
        case 2:
            cout << "Ingrese numero= ";
            cin >> num;
            lista.insertarPorCabeza(num);
            system("pause>nul");
            break;

        case 3:
            cout << "Ingrese numero= ";
            cin >> num;
            cout << "Ingrese indice= ";
            cin >> ind;
            lista.insertarEn(ind, num);
            system("pause>nul");
            break;

        case 0:
            repite = false;
            break;
        }

    } while (repite);
}

void menuEliminar(ListaSimple& lista)
{
    bool repite = true;
    int opc,ind;
    do {
        system("cls");
        opc = menu2();
        switch (opc) {
        case 1: {
            lista.eliminarPorCabeza();
            lista.mostrar();
            system("pause>nul");
            break;
        }
        case 2:
            lista.eliminarPorCola();
            lista.mostrar();
            system("pause>nul");
            break;
        case 3:
            cout << "Ingrese indice a eliminar: ";
            cin>>ind;
            lista.eliminar(ind);
            lista.mostrar();
            system("pause>nul");
            break;
        case 0:
            repite = false;
            break;
        }

    } while (repite);
}
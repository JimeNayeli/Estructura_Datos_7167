#include "Lista.h"
#include "Nodo.h"
using namespace std;
void menuPrincipal();
void menuAgregar(Lista&);
void menuEliminar(Lista&);
int menu();
int menu2();

int menu(){
	int opc;
	cout<<"\n\t\t------------------------------------------------";
	printf("\n\t\t|           Listas              |");
	cout<<"\n\t\t------------------------------------------------\n";
	printf("\t\n1. Insertar");
	printf("\t\n2. Eliminar ");
	printf("\t\n3. Imprimir");
	printf("\t\n0. Salir ");
	printf("\n\n\tElija una opcion: ");
	scanf("%d",&opc);
	return opc;
}
int menu2(){
	int opc;
	printf("\t\n1. Por la cabeza");
	printf("\t\n2. Por la cola ");
	printf("\t\n0. Salir ");
	printf("\n\n\tElija una opcion: ");
	scanf("%d",&opc);
	return opc;
}

void menuPrincipal(){
    bool repite = true;
    int opc;
    Lista lista;
    do {
    	system("cls");
		opc=menu();
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
        case 0:{
            system("cls");
            cout << "\nGracias por utilizar nuestro programa" << endl;
            repite = false;
            system("pause>nul");
            break;
        }
    }
    } while (repite);
}

void menuAgregar(Lista &lista)
{
    bool repite = true;
    int opc;
    int num;
    Lista lst;
    do {
    	system("cls");
		opc=menu2();
        switch (opc) {
        case 1:{
            cout << "Ingrese numero= ";
            cin>>num;
            lista.insertarPorCabeza(num);
            system("pause");
            break;
        }
        case 2:
            cout << "Ingrese numero= ";
            cin>>num;
            lista.insertarPorCola(num);
            system("pause>nul");
            break;

        case 0:
            repite = false;
            break;
        }

    } while (repite);
}

void menuEliminar(Lista &lista)
{
    bool repite = true;
    int opc;
    do {
    	system("cls");
		opc=menu2();
        switch (opc) {
        case 1:{
            lista.mostrar();
            lista.borrarPorCabeza();
            system("pause>nul");
            break;
		}
        case 2:
            lista.borrarPorCola();
            system("pause>nul");
            break;
        case 0:
            repite = false;
            break;
        }

    } while (repite);
}


#include <iostream>
#include "Funciones.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	int t;
	Funciones f;
	int *ptr=(int*)malloc(4*sizeof(int));
	
	cout<<"Ingrese el tamanio: "<<endl;
	cin>>t;
	
	f.ingresar(ptr,t);
	f.imprimir(ptr,t);
	f.procesar(ptr,t);
	f.imprimir(ptr,t);
	return 0;
}
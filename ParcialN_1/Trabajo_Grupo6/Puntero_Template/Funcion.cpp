#include "Funcion.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

template <class T>
void ingresar(T *p, int t){
    int i;
	for(i=0;i<t;i++){
		printf("Ingrese el valor: ");
		cin>>*p++;
	}
}

template <class T>
void imprimir(T *p, int t){
   	int i;
	for(i=0;i<t;i++){
		printf("\nValor ingresado: ");
		cout<<*(&(*p));
		*(p++)	;
	}
	printf("\n");
}

template <class T>
void procesar(T *p, int t){
    int i;
    T e;
	printf("\nIngrese el escalar: ");
	cin>>e;
	for(i=0;i<t;i++){
		*p=(*(&(*p)))*e;
		*(p++);
	}
}

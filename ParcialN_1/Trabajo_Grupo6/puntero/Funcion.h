#include <iostream>
using namespace std;

template <class H>
void ingresar(H *, H);

template <class H>
void imprimir(H *, H);

template <class H>
void procesar(H *, H);

template <class H>
void ingresar(H *p, H t){
    int i;
	for(i=0;i<t;i++){
		printf("Ingrese el valor entero: ");
		cin>>*p++;
	}
}

template <class H>
void imprimir(H *p, H t){
    int i;
	for(i=0;i<t;i++){
		printf("\nValor ingresado: ");
		cout<<*(&(*p));
		*(p++)	;
	}
	printf("\n");
}

template <class H>
void procesar(H *p, H t){
    int i,e;
	printf("\nIngrese el escalar: ")	;
	scanf("%d",&e);
	for(i=0;i<t;i++){
		*p=(*(&(*p)))*e;
		*(p++);
	}
}


#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Funcion.h"
int main(int argc, char** argv) {
	float t;
	float *ptr=(float*)malloc(4*sizeof(float));
	float *ptr2=(float*)malloc(4*sizeof(float));
	std::cout<<"Ingrese el tamanio: "<<std::endl;
	std::cin>>t;
	ingresar(ptr,t);
	imprimir(ptr,t);
	procesar(ptr,t);
	imprimir(ptr,t);
	return 0;
}

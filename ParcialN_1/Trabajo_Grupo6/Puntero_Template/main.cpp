#include <iostream>
#include "Funcion.cpp"
/* ********************************************** **********************
 * Universidad de las Fuerzas Armadas ESPE
 * Plantilla de el ejercicio Fraccion
 * Integrantes: Paul Chillagana, Jorge Nasimba, Jimena Tutillo
 * Fecha de creacion: Miercoles, 10 de noviembre de 2021 5:30:23 PM
 * Fecha de modificacion: Miercoles, 10 de noviembre de 2021 18:10:58 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
*********************************************** ******************** */
int main(int argc, char** argv) {
	int t;
	float *ptrf=(float*)malloc(4*sizeof(float));
	int *ptr=(int*)malloc(4*sizeof(int));
	cout<<"\n\tEnteros\n";
	std::cout<<"Ingrese el tamanio: "<<std::endl;
	std::cin>>t;
	ingresar(ptr,t);
	imprimir(ptr,t);
	procesar(ptr,t);
	imprimir(ptr,t);
	cout<<"\n\tFlotante\n";
	std::cout<<"Ingrese el tamanio: "<<std::endl;
	std::cin>>t;
	ingresar(ptrf,t);
	imprimir(ptrf,t);
	procesar(ptrf,t);
	imprimir(ptrf,t);
	return 0;
}

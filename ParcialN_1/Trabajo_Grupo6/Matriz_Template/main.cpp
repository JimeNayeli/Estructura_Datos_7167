
#include "funcion.cpp"
/* ********************************************** **********************
 * Universidad de las Fuerzas Armadas ESPE
 * Plantilla de el ejercicio Matriz
 * Integrantes: Paul Chillagana, Jorge Nasimba, Jimena Tutillo
 * Fecha de creacion: Domingo, 14 de noviembre de 2021 11:30:23 PM
 * Fecha de modificacion: Domingo, 14 de noviembre de 2021 13:10:58 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
*********************************************** ******************** */
int main(int argc, char** argv) {
	float d;
	float **m1,**m2,**mr;
	printf("Ingrese la dimension: ");
	cin>>d;
	m1=segmentar(d);
	m2=segmentar(d);
	mr=segmentar(d);
	encerar(m1,d);
	encerar(m2,d);
	encerar(mr,d);
	ingresar(m1,d);
	ingresar(m2,d);
	printf("\n");
	imprimir(m1,d);
	printf("\n");
	imprimir(m2,d);
	printf("\n");
	procesar(m1,m2,mr,d);
	printf("\n");
	imprimir(mr,d);
	return 0;
}
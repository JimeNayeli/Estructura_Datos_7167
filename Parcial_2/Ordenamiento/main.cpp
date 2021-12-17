#include <iostream>
#include "Burbuja.h"
#include "QuickSort.h"
#include "ShellSort.h"
#include "Distribucion.h"
#include "Vector.h"
#include "Auxiliar.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opc,num;
	char mensaje[]="\nDesea volver a realizar? S/N: "; 
	int arreglo[num];
	double arreglo2[num];
	Vector<int> v;
	Burbuja<int> b;
	Burbuja<double> b2;
	ShellSort s;
	CountingSort d;
	QuickSort<int> q=QuickSort<int>();
	do{
		system("cls");
		opc=menu();
		switch(opc){
			case 1:{
				do{	
					system("cls");
					cout<<"\n\t\tOrdenamiento Burbuja\n";		
					cout<<"\n\tCantidad de numeros: ";
					cin>>num;
					b.encerar(arreglo,num);
					b.generar(arreglo,num);
					cout<<"\nDesordenado\n";
					b.imprimir(arreglo,num);
					b.ordenar(arreglo,num);
					cout<<"\nOrdenado\n";
					b.imprimir(arreglo,num);
				}while(continuar(mensaje));
				system("pause");
				break;
			}
			case 2:{
				do{	
					system("cls");
					cout<<"\n\t\tOrdenamiento QuickSort\n";		
					cout<<"\n\tCantidad de numeros: ";
					cin>>num;
					v= Vector<int>(num);
					v.generar(num);
					cout<<"\nDesordenado\n";
					v.imprimir();
					q.ordenar(v.getVector(),0,num-1);
					cout<<"\nOrdenado\n";
					v.imprimir();
				}while(continuar(mensaje));
				system("pause");
				
				break;
			}
			case 3:{
				do{	
					system("cls");
					cout<<"\n\t\tOrdenamiento ShellSort\n";		
					cout<<"\n\tCantidad de numeros: ";
					cin>>num;
					s.generar(arreglo,num);
					cout<<"\nDesordenado\n";
					s.mostrar(arreglo,num);
					s.ordenar(arreglo,num);
					cout<<"\nOrdenado\n";
					s.mostrar(arreglo,num);
				}while(continuar(mensaje));
				system("pause");
				break;
			}
			case 4:{
				do{	
					system("cls");
					cout<<"\n\t\tOrdenamiento Por Distribucion\n";		
					cout<<"\n\tCantidad de numeros: ";
					cin>>num;
					d.encerar(arreglo,num);
					d.generar(arreglo,num);
					cout<<"\nDesordenado\n";
					d.imprimir(arreglo,num);
					d.ordenar(arreglo,num);
					cout<<"\nOrdenado\n";
					d.imprimir(arreglo,num);
				}while(continuar(mensaje));
				system("pause");
				
				break;
			}
			case 5:{
				do{	
					system("cls");
					cout<<"\n\t\tOrdenamiento\n";		
					cout<<"\n\tCantidad de numeros: ";
					cin>>num;
					b2.encerar(arreglo2,num);
					ingresar(arreglo2,num);
					cout<<"\nDesordenado\n";
					b2.imprimir(arreglo2,num);
					b2.ordenar(arreglo2,num);
					cout<<"\nOrdenado\n";
					imprimir(arreglo2,num);	
				}while(continuar(mensaje));
				system("pause");
				break;
			}
			case 0:{
				cout<<"\n\tGracias...\n";
				break;
			}
			default:{
				cout<<"\n\tOpcion incorrecta\n";
				system("pause");
				break;
			}
		}
		
	}while(opc!=0);
	
	
	
	
	return 0;
}
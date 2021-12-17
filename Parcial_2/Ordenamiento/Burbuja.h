#include <iostream>
#include <time.h>
using namespace std;

template <class tipo>
class Burbuja {
public:
	void encerar(tipo arreglo[],int); 
	void generar(tipo arreglo[],int); 
	void ordenar(tipo arreglo[],int); 
	void imprimir(tipo arreglo[],int); 
};
template <class tipo>
void Burbuja<tipo>::encerar(tipo arreglo[],int n) {
	for (int i = 0; i < n; i++) {
	arreglo[i] = 0;
	}
}
template <class tipo>
void Burbuja<tipo>::generar(tipo arreglo[],int n) {
	srand(time(NULL)); 
	for (int i = 0; i < n; i++) {
	arreglo[i] = 1 + rand() % 10; 
	}
}
template <class tipo>
void Burbuja<tipo>::ordenar(tipo arreglo[],int n) {
int aux, vueltas = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arreglo[i] > arreglo[j]) { 
				aux = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = aux;
			}
		}
	vueltas++;
	}
	cout <<"\n\tEl numero de vueltas realizadas es: " << vueltas << "\n";
}
template <class tipo>
void Burbuja<tipo>::imprimir(tipo arreglo[],int n) {
cout << "\n\tArreglo:"<<"\n";
	for (int i = 0; i < n; i++) {
	cout<< arreglo[i] << " ";
	}
cout<<"\n";
}

#include "funcion.h"

template <class T>
T **segmentar(T d){
	T **mat;
	int j;
	mat=(T **)malloc(d*sizeof(T*));
	for(j=0;j<d;j++){
		*(mat+j)=(T *)malloc(d*sizeof(T));			
	}
	return mat;	
}
template <class T>
void encerar(T **mat, T d){
	for(int i=0;i<d;i++)
	for(int j=0;j<d;j++)
	*(*(mat+i)+j)=0;
}
template <class T>
void ingresar(T **mat,T d){
	for(int i=0;i<d;i++)
	for(int j=0;j<d;j++)
	cin>> (*(*(mat+i)+j));
}
template <class T>
void imprimir(T **mat, T d){
	for(int i=0;i<d;i++){
		for(int j=0;j<d;j++){
			cout<<(*(*(mat+i)+j));
			printf("%*s",j+5,"");
		}
		printf("\n");
	}	
}
template <class T>
void procesar(T **mat1, T **mat2, T **matR, T d){
	for(int i=0;i<d;i++){
		for(int j=0;j<d;j++){
			for(int h=0;h<d;h++){
				*(*(matR+i)+j)= *(*(matR+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j));
			}
		}
	}	
}
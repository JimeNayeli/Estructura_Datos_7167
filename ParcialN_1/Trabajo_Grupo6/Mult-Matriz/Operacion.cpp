#include "Operacion.h"
#include "Matriz.h"
using namespace std;

int** Operacion::segmentar(int fila, int col){
	Matriz mat;
	mat.setMat((int**)malloc(fila * sizeof(int*)));
	for(int j=0;j<fila;j++){
		*(mat.getMat()+j)=(int *)malloc(col*sizeof(int));			
	}
	return mat.getMat();	
}

void Operacion::encerar(Matriz mat, int fila,int col){
	for(int i=0;i<fila;i++)
	for(int j=0;j<col;j++)
	*(*(mat.getMat()+i)+j)=0;
}

void Operacion::ingresar(Matriz mat,int fila, int col){	
	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
		cin>> (*(*(mat.getMat()+i)+j));
		}
	}
	
}

void Operacion::imprimir(Matriz mat, int fila,int col){

	for(int i=0;i<fila;i++){
		for(int j=0;j<col;j++){
			cout<<(*(*(mat.getMat()+i)+j));
			printf("%*s",j+5,"");
		}
		printf("\n");
	}
}

void Operacion::procesar(Matriz mat,Matriz mat2,Matriz matR, int fila,int col,int col2){
	
	for(int i=0;i<fila;i++){
		for(int j=0;j<col2;j++){
			for(int h=0;h<col;h++)
				*(*(matR.getMat()+i)+j)= *(*(matR.getMat()+i)+j)+(*(*(mat.getMat()+i)+h))*(*(*(mat2.getMat()+h)+j));
		}
	}
	
}
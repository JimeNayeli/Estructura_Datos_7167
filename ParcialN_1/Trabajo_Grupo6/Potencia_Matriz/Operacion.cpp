
#include "Operacion.h"
#include "Matriz.h"
#include <stdlib.h>


int** Operacion::segmentar(int d){
	Matriz mat;
	mat.setMat((int**)malloc(d * sizeof(int*)));
	for(int j=0;j<d;j++){
		*(mat.getMat()+j)=(int *)malloc(d*sizeof(int));			
	}
	return mat.getMat();	
}

void Operacion::encerar(Matriz mat, int d){
	for(int i=0;i<d;i++)
	for(int j=0;j<d;j++)
	*(*(mat.getMat()+i)+j)=0;
}

void Operacion::ingresar(Matriz mat,int d){	
	for(int i=0;i<d;i++){
		for(int j=0;j<d;j++){
		cin>> (*(*(mat.getMat()+i)+j));
		}
	}
	
}

void Operacion::imprimir(Matriz mat, int d){

	for(int i=0;i<d;i++){
		for(int j=0;j<d;j++){
			cout<<(*(*(mat.getMat()+i)+j));
			printf("%*s",j+5,"");
		}
		printf("\n");
	}
}

void Operacion::procesar(Matriz mat,Matriz mat2,Matriz matR, int d){
	
	for(int i=0;i<d;i++){
		for(int j=0;j<d;j++){
			for(int h=0;h<d;h++)
				*(*(matR.getMat()+i)+j)= *(*(matR.getMat()+i)+j)+(*(*(mat.getMat()+i)+h))*(*(*(mat2.getMat()+h)+j));
		}
	}
	
}
void Operacion::copiarMatriz(Matriz m1, Matriz m2, int dim) {
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            *(*(m1.getMat() + i) + j) = *(*(m2.getMat()+i) + j);
        }
    }
}

void Operacion::calcularPotencia(Matriz m1, Matriz mr, int dim, int potencia) {
    int i=0,j=0;
    Matriz m2;
    m2.setMat(segmentar(dim));
    encerar(m2, dim);
    copiarMatriz(m2, m1, dim);
    copiarMatriz(mr, m1, dim);
    if (potencia==0) {
        encerar(mr, dim);
        for (j = 0; j < dim; j++)
            *(*(mr.getMat() + j) + j) = 1;
    }
    for (i = 0; i < potencia-1; i++) {
        encerar(mr, dim);
        procesar(m2, m1, mr, dim);
        copiarMatriz(m2, mr, dim);
    }
}
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "Matriz.h"

using namespace std;
bool validar(int fila, int col){
	fila==col;
	return true;
}
void ingresar(int **mat,int fila, int col){
	int i,j;
	mat=(int **)malloc(sizeof(int*)*fila);
	for(i=0;i<fila;i++){
		*(mat+i)=(int *)malloc(sizeof(int)*col);
	}

	for(i=0;i<fila;i++){
		for(j=0;j<col;j++)
			cin>> (*(*(mat+i)+j));
		}
	for(i=0;i<fila;i++){
		for(j=0;j<col;j++){
			cout<<(*(*(mat+i))+j);
			printf("%*s",j+5,"");
		}
		printf("\n\n");
	}

}
void procesar(int **mat1, int **mat2, int **matR, int fila,int col,int col2){
	matR=(int **)malloc(sizeof(int*)*fila);
	for(int i=0;i<fila;i++){
		*(matR+i)=(int *)malloc(sizeof(int)*col2);
	}
	
	for(int i=0;i<fila;i++){
		for(int j=0;j<col2;j++){
			*(*(matR+i)+j)=0;
			for(int h=0;h<col;h++)
				*(*(matR+i)+j)= *(*(matR+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j));
		}
	}
	
	
	for(int i=0;i<fila;i++){
		for(int j=0;j<col2;j++){
			cout<<(*(*(matR+i))+j);
			printf("%*s",j+5,"");
		}
		printf("\n");
	}	
}



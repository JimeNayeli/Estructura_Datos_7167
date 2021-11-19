#include "Operacion.h"

void Hanoi::hanoi(int num, char a,char c,char b){
	if(num==1){
		cout<<"Mover del bloque "<<num<<" Desde "<<a<<" Hasta "<< c<< endl;
	}
	else{
		hanoi(num-1,a,b,c);
		cout<<"Mover del bloque "<<num<<" Desde "<<a<<" Hasta "<< c<< endl;
		hanoi(num-1,b,c,a);
	}
}
int Hanoi::contar(int d){
	if(d==1)
		return 1;
	else 
		return 2*contar(d-1)+1;
}
#include <iostream>
#include "ListaD.h"

using namespace std;
void agregar(int);
void presentar_I();
void presentar_F();
ListaD *I,*F,*T;
int main(int argc, char** argv) {
	for(int i=0;i<10;i++)
	{
		agregar(i*10);
	}
	cout<<"Presentar Inicio"<<endl;
	presentar_I();
	cout<<"Presentar Final"<<endl;
	presentar_F();
	return 0;
}

void agregar(int x)
{
	ListaD* T=new ListaD();
	T->id=x;
	T->sig=NULL;
	T->ant=NULL;
	if(I==NULL)
	{
		I=T;
	}
	else
	{
		F->sig=T;
		T->ant=F;
	}
	F=T;
}
void presentar_I()
{
	T=I;
	while(T!=NULL)
	{
		cout<<"ID: "<<T->id<<endl;
		T=T->sig;
	}
}

void presentar_F()
{
	T=F;
	while(T!=NULL)
	{
		cout<<"ID: "<<T->id<<endl;
		T=T->ant;
	}
}
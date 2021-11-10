#include "Funciones.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <cstdlib>
using namespace std;
template<class... Args>

auto Funciones::sumar(Args... args){
	auto suma=0.0;
	for(auto &v:{args...}){
		suma+=v;
	}
	return suma;
}


void Funciones::leerArchivo(){
	string texto,linea;
	Funciones f;
	auto num=0;//datos int
	auto num2=0.0;//datos float
	int guardar[8],i=0;
	float guardarf[8];
	ifstream archivo;
	
	archivo.open("numeros.txt",ios::in);
	if(archivo.fail()){
		cout<<"ERROR. No se pudo escribir en el archivo."<<endl;	
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<"\n"<<texto;
		num=stoi(texto);
		guardar[i]=num;//guardamos los datos
		num2=stof(texto);
		guardarf[i]=num2;
		i++;
	}	
	archivo.close();
	
	cout<<"\nLa suma de enteros es: "<<f.sumar(guardar[0],guardar[1],guardar[2],guardar[3],guardar[4],guardar[5],guardar[6],guardar[7]);
	cout<<"\nLa suma de flotantes es: "<<f.sumar(guardarf[0],guardarf[1],guardarf[2],guardarf[3],guardarf[4],guardarf[5],guardarf[6],guardarf[7]);
}

#include <iostream>
#include <stdlib.h>
#include <string.h>

int ingresarEntero();
float ingresarfloat();
string ingresarLetra();
bool validar(string numero);
bool validarEntero(string numero);
bool validarLetra(string palabra);

int ingresarEntero() {
		string numero;
		bool valido = false;
		while(!valido) {
			try {
				fflush(stdin);
				cin >> numero;
				valido = validarEntero(numero);
				if(!valido) {
					throw numero;
				}
			}catch(string e) {
				cout << "El numero " << e << " no es valido, Ingrese de nuevo:" << endl;
			}
		}
		return atoi(numero.c_str());
	}
	
string ingresarEnteroT() {
		string numero;
		bool valido = false;
		while(!valido) {
			try {
				fflush(stdin);
				cin >> numero;
				valido = validarEntero(numero);
				if(!valido) {
					throw numero;
				}
			}catch(string e) {
				cout << "El numero " << e << " no es valido, Ingrese de nuevo:" << endl;
			}
		}
		return numero;
	}
string ingresarLetra() {
		string palabra;
		bool valido = false;
		while(!valido) {
			try {
				cin >> palabra;
				valido = validarLetra(palabra);
				if(!valido) {
					throw palabra;
				}
			}catch(string e) {
				cout << "La palabra " << e << " no es valida, Ingrese de nuevo: " << endl;
			}
		}
		return palabra;
	}


bool validarEntero(string numero) {
		int inicio = 0;
		if(numero.length() == 0) {
			return 0;
		}
		if(numero[0] == '+' || numero[0] == '-') {
			inicio = 1;
			if(numero.length() == 1) {
				return 0;
			}
		}
		for(int i=inicio; i<numero.length(); i++) {
			if(!isdigit(numero[i])) {
				return 0;
			}
		}
		return 1;
}

bool validarLetra(string palabra) {
	char c;
	for(int i=0; i<palabra.size(); i++) {
		c=palabra[i];
		if(isalpha(c) == 0) {
			if(isspace(c) == 0) {
				return 0;
			}
		}
	}
	return 1;
}
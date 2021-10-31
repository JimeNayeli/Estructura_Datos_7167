#include <iostream>
#include "Frase.h"
#include "Frase.cpp"
#include "Operacion.h"
#include "Operacion.cpp"
using namespace std;
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Numero de vocales de una Frase
 * Autor:   Jorge Nasimba
 * Fecha de creacion: Sabado, Octubre 30, 2021 20:33:17 PM
 * Fecha de modificacion: Sabado, Octubre 30, 2021 21:40:38 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos
 ***********************************************************************/
int main(int argc, char** argv) {
	
    Frase <string> frase;
	Operacion<string> op;
	
	frase.setFrase("Todo posi mi pana, claro que si");
	frase.toString(frase.getFrase());
	op.contar_vocales(frase.getFrase());
		
	return 0;
}

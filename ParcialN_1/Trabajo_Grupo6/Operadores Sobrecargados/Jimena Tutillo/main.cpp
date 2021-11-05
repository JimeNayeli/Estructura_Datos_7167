#include <iostream>
#include "Tiempo.cpp"
/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 *Programa: Operadores Sobrecargados-Operador ++
 * Autor:Jimena Tutillo
 * Fecha de creacion: Jueves, Noviembre 4, 2021 8:49:23 PM
 * Fecha de modificacion: Jueves, Noviembre 4, 29, 2021 9:40:23 PM
 * NRC: 7167
 * Nombre de la materia: Estructura de Datos

 ***********************************************************************/
using namespace std;
int main() {
   Tiempo T1(18, 59), T2(10,50);
   cout<<"\n\tTiempo T1"<<endl;
   for(int i=0;i<4;i++,T1++){
   	T1.mostrarTiempo();
   }
   cout<<"\n\tTiempo T2"<<endl;
   for(int i=0;i<4;i++,T2++){
   	T2.mostrarTiempo();
   }

   return 0;
}

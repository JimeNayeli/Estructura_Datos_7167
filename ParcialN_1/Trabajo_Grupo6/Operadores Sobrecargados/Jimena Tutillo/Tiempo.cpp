#include "Tiempo.h"
using namespace std;
void Tiempo::mostrarTiempo() {
    cout << "H: " << hora << " M:" << minuto <<endl;
}

Tiempo Tiempo::operator++(){
    ++this->minuto;         
    if(this->minuto >= 60) {
        ++this->hora;
        this->minuto -= 60;
    }
    return Tiempo(this->hora, this->minuto);
}

Tiempo Tiempo::operator++(int) {
    Tiempo T(hora, minuto);
    ++this->minuto;                       
    if(this->minuto >= 60) {
	++this->hora;
        this->minuto -= 60;
    }
    return T; 
}


#include "Fraccion.h"
#include "Operaciones.h"


float Fraccion::getNumerador(void)
{
   return numerador;
}



void Fraccion::setNumerador(float newNumerador)
{
   numerador = newNumerador;
}



float Fraccion::getDenominador(void)
{
   return denominador;
}



void Fraccion::setDenominador(float newDenominador)
{
   denominador = newDenominador;
}



Fraccion::Fraccion(float num, float den)
{
   numerador=num;
   denominador=den;
}



Fraccion::~Fraccion()
{
   // TODO : implement
}

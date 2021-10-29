#include "Operaciones.h"
#include "Fraccion.h"


 
float Operaciones::numerador_resultante(float num1,float den1,float num2,float den2)
{
	return ((num1*den2)+(num2*den1));
}

float Operaciones::denominador_resultante(float den1,float den2)
{
	return (den1+den2);
}



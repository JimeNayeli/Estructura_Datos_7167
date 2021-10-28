/***********************************************************************
 * Module:  Fraccion.h
 * Author:  Jimena
 * Modified: Wednesday, October 27, 2021 7:49:23 PM
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__TrabajoGrupal2_Fraccion_h)
#define __TrabajoGrupal2_Fraccion_h

class Fraccion
{
public:
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   Fraccion(float num, float den);
   ~Fraccion();

protected:
private:
   float numerador;
   float denominador;


};

#endif
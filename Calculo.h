/***********************************************************************
 * Module:  Calculo.h
 * Author:  Jimena
 * Modified: Thursday, October 28, 2021 8:47:42 PM
 * Purpose: Declaration of the class Calculo
 ***********************************************************************/

#if !defined(__TrabajoGrupal3_Calculo_h)
#define __TrabajoGrupal3_Calculo_h

#include <Fraccion.h>

class Calculo
{
public:
   virtual Fraccion calcularDen(void)=0;
   virtual Fraccion calcularNum(void)=0;

protected:
private:

};

#endif
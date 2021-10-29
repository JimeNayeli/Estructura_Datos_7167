#include <iostream> 
using namespace std;

class Fraccion
{
	
public:
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   Fraccion(float numerador, float denominador);
   ~Fraccion();
   
protected:
private:
   float numerador;
   float denominador;


};


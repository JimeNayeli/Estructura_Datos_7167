#pragma once
template <typename T>
class Fraccion
{
	
public:
   T getNumerador()const;
   void setNumerador(T newNumerador);
   T getDenominador()const;
   void setDenominador(T newDenominador);
   Fraccion(T numerador, T denominador);
   ~Fraccion();
   
protected:
private:
   float numerador;
   float denominador;


};

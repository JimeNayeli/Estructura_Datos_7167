#ifndef CUENTA_H
#define CUENTA_H

using namespace std;
class Cuenta{
	private:
		float valor;
		float total;
		float descuento;
	public:
		Cuenta(){
			this->valor=0;
		}
		Cuenta(float val){
			this->valor=val;
		}
		void setValor(float val);
		float getValor();
		void setTotal(float t);
		float getTotal();
		void setDescuento(float des);
		float getDescuento();
	
};

#endif


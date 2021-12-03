#include "Cuenta.h"

float Cuenta::getValor(){
	return this->valor;
}
float Cuenta::getDescuento(){
	return this->descuento;
}
float Cuenta::getTotal(){
	return this->total;
}
void Cuenta::setValor(float val){
	this->valor=val;
}
void Cuenta::setDescuento(float des){
	this->descuento=des;
}
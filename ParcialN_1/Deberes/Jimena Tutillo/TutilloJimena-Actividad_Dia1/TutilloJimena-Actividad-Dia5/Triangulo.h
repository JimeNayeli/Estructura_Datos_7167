template <typename T>
class Triangulo{
	public:
		T getCatetoO()const;
		void setCatetoO(T n);
		T getHipotenusa()const;
		void setHipotenusa(T n);
		T obtenerAngulo(T cateto, T hipotenusa);
		Triangulo(T catetoO,T hipotenusa){
			this->catetoO=catetoO;
			this->hipotenusa=hipotenusa;
		};
		
	private:
		T catetoO;
		T hipotenusa;
	
};

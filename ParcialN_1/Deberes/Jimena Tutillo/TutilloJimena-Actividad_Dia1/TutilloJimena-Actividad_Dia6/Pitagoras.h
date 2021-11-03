template <typename T>
class Pitagoras{
	public:
		Pitagoras(T catetoOpuesto,T catetoAdyasente){
			this->catetoOpuesto=catetoOpuesto;
			this->catetoAdyasente=catetoAdyasente;
		};
		T getCatetoOpuesto()const;
		void setCatetoOpuesto(T n);
		T getCatetoAdyasente()const;
		void setCatetoAdyasente(T n);
		T calcularPitagoras(T catetoO,T catetoA);
	private:
		T catetoOpuesto;
		T catetoAdyasente;

		
};

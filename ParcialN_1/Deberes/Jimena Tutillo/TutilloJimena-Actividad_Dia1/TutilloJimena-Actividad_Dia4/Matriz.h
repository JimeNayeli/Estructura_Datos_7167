template <typename T>
class Matriz{
    public:
    	void setFila(T n);
		T getFila()const;
		void setColumna(T n);
		T getColumna()const;
		void setValor(T n);
		T getValor()const;
        T sumar(T m[]);
        void imprimir(T m[3][3]);
    private:
        T fila;
        T columna;
        T valor;

        
      

};

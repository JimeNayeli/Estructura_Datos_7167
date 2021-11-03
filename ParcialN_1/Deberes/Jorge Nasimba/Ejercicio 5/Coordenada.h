#pragma once
template <typename T>
class Coordenada{
	
	public:
		void setX(T n);
		T getX()const;
		void setY(T n);
		T getY()const;
		Coordenada(T x, T y);
	private:
		T x;
		T y;
};

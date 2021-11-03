#pragma once
template <typename T>
class Cono{
	
	public:
		void setR(T n);
		T getR()const;
		void setH(T n);
		T getH()const;
		Cono(T r, T h);
	private:
		T r;
		T h;
};

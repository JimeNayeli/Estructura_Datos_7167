#pragma once
class Matriz{
	private:
		int **mat;
	
	public:
		Matriz() = default;
		int **getMat();
		void setMat(int **n);
};
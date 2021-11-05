#include <iostream>
#include "Complejo.h"
#include "Complejo.cpp"
using namespace std;

int main() {
	Complejo<int> A(1,3),B(2,4);
	Complejo<int> C;
	int x,y;
	cout <<" suma de complejos "<<endl;
	C=A+B;
	cout<<C.getReal()<<"  +  "<<C.getImg()<<"  i "<< endl;
	C.setImg(0);
	C.setReal(0);
	cout <<" resta de complejos "<<endl;
	C=A-B;
	cout<<C.getReal()<<"  +  "<<C.getImg()<<"  i "<< endl;
	cin.ignore();
	system("pause");
	return 0;
}

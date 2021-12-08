#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <fstream>
#include <iomanip>
#include <math.h>
#include <vector>
#include "Persona.h"


using namespace std;
bool validarCedula(string _id){
	vector<int> v1;
	int _id_num = stoi(_id, nullptr, 10);
	int temp;
	int sum_par = 0;
	int sum_impar = 0;
	int sum;
	while (_id_num > 0)
	{
		int temp = _id_num % 10;
		_id_num /= 10;
		v1.push_back(temp);
	}
	for (int i = 1; i < _id.size(); i++)
	{
		if (i % 2) {
			temp = v1.at(i) * 2;
			if (temp > 9) {
				temp -= 9;
			}
			sum_par += temp;
		}
		else {
			sum_impar += v1.at(i);
		}
	}
	sum = sum_par + sum_impar;
	if ((10 - (sum % 10)) == v1.front()) {
		return true;
	}
	else {
		cout << "\nLa cedula ingresada es invalida" << endl;
		return false;
	}
}




#include <iostream>
using namespace std;

class Vector {
  public: int x, y;
  bool operator== (Vector v) {
    return ((v.x == x) && (v.y == y))? true: false;
  }
};


int main(int argc, char** argv) {
	Vector v1 = {2, 3}, v2 = {2, 3};
  if ( v1 == v2 )
    cout << "Iguales" << endl;
  else
    cout << "Distintos" << endl;
	return 0;
}

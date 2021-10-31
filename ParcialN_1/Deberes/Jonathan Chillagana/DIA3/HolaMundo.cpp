#include <iostream>
#include <string>

using namespace std;

#include "Mate.cpp"
int main ()
{
 
    int a = 50;
    int b = 10;
    cout << "Max(a, b): " << Max(a, b) << endl; 

    double c = 23.6; 
    double d = 40.1; 
    cout << "Max(c, d): " << Max(c, d) << endl; 
    cout << "Max(c, d): " << Max(c, d) << endl; 

    string k = "Hola"; 
    string m = "Mundo"; 
    cout << "Max(k, m): " << Max(k, m) << endl; 

   return 0;
}
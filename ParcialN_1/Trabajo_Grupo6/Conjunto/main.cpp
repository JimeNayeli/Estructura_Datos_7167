
#include <iostream>    
#include <algorithm>    
#include <vector>       

int main () {
  int primero[] = {5,10,15,20,25};
  int segundo[] = {50,40,30,2,10};
  std::vector<int> v(10);      
  std::vector<int>::iterator it;

  std::sort (primero,primero+5);    
  std::sort (segundo,segundo+5);  

  it=std::set_union (primero, primero+5, segundo, segundo+5, v.begin());
                                              
  v.resize(it-v.begin());                      

  std::cout << "La union tiene " << (v.size()) << " elementos:\n";
  for (it=v.begin(); it!=v.end(); ++it)
  std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
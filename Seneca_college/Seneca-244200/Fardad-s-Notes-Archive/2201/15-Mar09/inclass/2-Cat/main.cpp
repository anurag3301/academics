#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sdds;
int main(){
  Cat C;
  C.act();
  C.move();
  C.sound();
  cout << "------------End of main" << endl;
  return 0;
}

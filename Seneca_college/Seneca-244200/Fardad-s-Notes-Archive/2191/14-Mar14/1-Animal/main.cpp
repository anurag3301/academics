#include <iostream>
#include <cstring>
using namespace std;
#include "animal.h"
using namespace sict;
int main(){
   Animal A = "Buffy";
 //  Animal A("Buffy");
  A.act();
  A.move();
  A.sound();
  cout << "------------End of main" << endl;
  return 0;
}

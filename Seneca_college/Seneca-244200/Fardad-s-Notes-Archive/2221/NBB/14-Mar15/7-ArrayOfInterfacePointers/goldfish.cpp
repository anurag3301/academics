#include <iostream>
#include "Utils.h"
using namespace std;
#include "goldfish.h"

namespace sdds{


  GoldFish::GoldFish(const char* name) :Pet(name){
    cout << "Creating " << *this << " the GoldFish" << endl;
  }
  void GoldFish::act()const{
    cout << "Act playful, " << name() << " the GoldFish" << endl;
  }
  void GoldFish::move()const{
    swim();
  }
  void GoldFish::swim()const{
    cout << "Swim like " << name() << " the GoldFish" << endl;
  }
  void GoldFish::sound()const{
    cout << "Glub!" << endl;
  }
  GoldFish::~GoldFish(){
    cout << "Remove " <<  name() << " the GoldFish" << endl;
  }
}
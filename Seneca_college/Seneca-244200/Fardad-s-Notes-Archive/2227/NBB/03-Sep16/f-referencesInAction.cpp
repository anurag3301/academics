#include <iostream>
using namespace std;
int read(int* p, int low, int high) { // read_int*_int_int
   int res = 0;
   cin >> *p;
   if (*p >= low && *p <= high) {
      res = 1;
   }
   return res;
}

bool read(int& r, int low, int high) {
   cin >> r;
   return (r >= low && r <= high);
}

int main() {
   int age;
   cout << "Enter you age: ";
   if (read(&age, 10, 99)) { // using address
      cout << "Hello! " << age << " years old person!, cool...." << endl;
   }
   else {
      cout << "invalid age!" << endl;
   }
   cout << "Enter you age: ";
   if (read(age, 10, 99)) { // using refernce    read(int& r = age, int low=10, int high=99);
      cout << "Hello! " << age << " years old person!, cool...." << endl;
   }
   else {
      cout << "invalid age!" << endl;
   }

   return 0;
}

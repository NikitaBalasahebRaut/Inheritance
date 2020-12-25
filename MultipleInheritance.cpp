//Program to demonstrate the concept of multiple inheritance
//a class can be derived from more than one parents called as multiple inheritance
#include <iostream>
using namespace std;

class Mammal
 {
  public:
    Mammal()
    {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal
 {
  public:
    WingedAnimal()
    {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal
 {
   
};

int main()
{
    Bat b1;
    return 0;
}

/*output 
Mammals can give direct birth.
Winged animal can flap.
*/
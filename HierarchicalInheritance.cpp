//program to demonstrate the concept of C++ Hierarchical Inheritance
//If more than one class is inherited from the base class, it's known as hierarchical inheritance. 

#include <iostream>
using namespace std;

class Base
{
    public:
	 
      void display()
      {
          cout<<"Base class content.\n";
      }
};

class Derived1 : public Base
{
	public:
	
   void fun()
  {
	  cout<<"Inside fun\n";
  }
};

class Derived2 : public Base
{
	public:
  void gun()
  {
	  cout<<"Inside gun\n";
  }
};

class Derived3 : public Base
{
	public:
  void sun()
  {
	  cout<<"Inside sun\n";
  }
};

int main()
{
	Derived1 obj1;
	obj1.display();
	obj1.fun();
	
    Derived2 obj2;
    obj2.display();
	obj2.gun();
	
	Derived3 obj3;
    obj3.display();
	obj3.sun();
	
	
    return 0;
}

/*
output 
Base class content.
Inside fun
Base class content.
Inside gun
Base class content.
Inside sun
*/
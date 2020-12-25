//program to demonstrate the concept of multiple inheritance
//in multilevel inheritance one class is inherited from the another class and that class is inherited by another class 
#include <iostream>
using namespace std;

class Base
{
    public:
	 
	  Base()
	  {
	    cout<<"Inside Default constructor of Base class\n";
	  }
	  ~Base()
	  {
		  cout<<"Inside destructor of Base class\n";
	  }
      void display()
      {
          cout<<"Base class content.\n";
      }
};

class Derived1 : public Base
{
	public:
	
   Derived1()
   {
	   cout<<"Inside Default constructor of Derived1 class\n";
   }
   ~Derived1()
   {
	   cout<<"Inside destructor of Derived1\n";
   }
};

class Derived2 : public Derived1
{
	public:
  void fun()
  {
	  cout<<"Inside fun\n";
  }
};

int main()
{
    Derived2 obj;
    obj.display();
	obj.fun();
    return 0;
}
/*
Inside Default constructor of Base class
Inside Default constructor of Derived1 class
Base class content.
Inside fun
Inside destructor of Derived1
Inside destructor of Base class
*/
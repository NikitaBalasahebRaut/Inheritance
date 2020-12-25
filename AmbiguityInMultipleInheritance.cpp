//Ambiguity in Multiple Inheritance
//ambiguous problem occure in multiple inheritance due to function overriding (because compiler doesn't know which function to call)
//these problem you can solve by using class name with scope resolution operator 
#include<iostream>
using namespace std;

class Parent
{
	public:
	  
	    void fun()
		{
			cout<<"Inside fun of parent class\n";
		}
};
class Parent2 
{
	public :
	
	void fun()
	{
		cout<<"Inside fun of parent2\n";
	}
};
class Child : public Parent,public Parent2
{
	
};
int main()
{
	Child obj;
	//obj.fun();         ---->error: request for member 'fun' is ambiguous----->because compiler doesn't know which function to call
	obj.Parent::fun();
	obj.Parent2::fun();
	return 0;
}

/*
output 
Inside fun of parent class
Inside fun of parent2

*/
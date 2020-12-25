//find the output of below c++ program
//these progran generate the error because we inherite base class as private then you cant access member of base class
#include<iostream>
using namespace std;

class base
{
    public: 
    void hello(){
        cout<<"base";
    }
};

class derived: private base
{
    
};

int main()
{
derived obj;
obj.hello();                 // error: 'base' is not an accessible base of 'derived' // error: 'void base::hello()' is inaccessible within this context
return 0;
}

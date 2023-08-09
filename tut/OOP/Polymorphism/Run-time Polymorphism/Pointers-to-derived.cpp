#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int var1;
    void display()
    {
        cout << "BaseClass" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    void display()
    {
        cout << "DerivedClass" << endl;
    }
};

int main()
{
    BaseClass *p;
    BaseClass obj1;
    DerivedClass obj_derived;
    p = &obj_derived; // pointing base class pointer to derived class
    /*

    Late binding
    
    f u have pointed a base class pointer to a derived class then, if you try
    to call the display() (the function with same name) then it will call display()
    of the base class; 

    Thus you can only call function of base class through base_class_pointer
    */
    p->display();

    DerivedClass *d; // pointing derived class pointer to derived class
    d=&obj_derived;
    d->display();// this will print derived class display()


    //binding is done at run-time
    //hence run-time polymorphism
}
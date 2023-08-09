#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int var_base=1;
    virtual void display() //virtual keyword changes the default behaviour 
    //and runs the derived class display();
    { 
        cout << "BaseClass" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived=2;
    void display()
    {
        cout << "DerivedClass" << endl;
    }
};

int main(){
    BaseClass *b;
    BaseClass obj_base;
    DerivedClass obj_derived;
    b=&obj_derived;
    b->display();
}
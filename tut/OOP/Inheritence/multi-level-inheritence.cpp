//class C inherits from B and B already inherits from A

#include <iostream>
using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"Func A\n";
    }
};
class B : public A{
    public:
    void Bfunc(){
        cout<<"Func B\n";
    }
};

class C : public B{
    public:
    void Cfunc(){
        cout<<"Func C\n";
    }
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();
    c.Cfunc();
    return 0;
}

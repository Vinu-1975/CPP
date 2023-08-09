#include <iostream>
using namespace std;
// SINGLE INHERITENCE : btwn two classes
// public properties of class A is inherited by class B
class A
{
public:
    void func()
    {
        cout << "Inherited";
    }
};
class B : public A
{
    public:
    
};
int main()
{
    B b;
    b.func();
    return 0;
}
#include<iostream>
using namespace std;
// MULTIPLE INHERITENCE : more than two classes
// classC inherits properties of both E and F;
class E
{
public:
    void Efunc()
    {
        cout << "Func E\n";
    }
};
class F
{
public:
    void Ffunc()
    {
        cout << "Func F\n";
    }
};
class C : public E, public F
{
public:
};
int main()
{
    C c;
    c.Efunc();
    c.Ffunc();
    return 0;
}
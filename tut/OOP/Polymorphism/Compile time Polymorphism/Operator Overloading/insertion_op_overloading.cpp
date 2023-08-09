#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;
    int b;

public:
    A(int a, int b)
    {
        this->a= a;
        this->b= b;
    }
    friend ostream & operator <<(ostream &COUT,A &c){
        COUT<<c.a<<endl;
        COUT<<c.b<<endl;
        return COUT;
    }
};

int main(){
    A a=A(5,6);
    cout<<a;

}


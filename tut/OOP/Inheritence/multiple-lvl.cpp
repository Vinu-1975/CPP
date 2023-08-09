#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void print1(){
        cout<<"class A"<<endl;
    }
};

class B : public A{
    public :
    void print2(){
        cout<<"class B"<<endl;
    }
};

class C : public A{
    public:
    void print3(){
        cout<<"class C"<<endl;
    }
};

class D : public B, public C{
    public:
    void print4(){
        cout<<"class D"<<endl;
    }
};

int main(){
    D d;
    d.print3();
    d.print2();
    d.B::print1();
    d.C::print1();
}
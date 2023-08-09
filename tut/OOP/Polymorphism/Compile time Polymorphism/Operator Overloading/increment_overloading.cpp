#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
    A(int a){
        this->a=a;
    }
    A &operator++(){
        ++a;
        return *this;
    }
    A operator++(int){
        A temp=*this;
        ++a;
        return temp;
    }
    void display(){
        cout<<a<<endl;
    }
};

int main(){
    A x(5);
    x++;
    x.display();
    ++x;
    x.display();

}
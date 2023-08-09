#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }

    Complex(int r,int i){
        real=r;
        imag=i;
    }
    Complex operator +(Complex &c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

    void getData(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(5,4);
    Complex c2(3,2);
    Complex c3;
    c3=c1+c2;
    c3.getData();
}
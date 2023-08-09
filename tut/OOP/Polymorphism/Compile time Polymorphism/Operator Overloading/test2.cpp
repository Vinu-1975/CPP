#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    
    friend ostream &operator<<(ostream &out,complex &c);
    friend istream &operator>>(istream &in,complex &c);
};

ostream &operator<<(ostream &out,complex &c){
    out<<c.real<<" + "<<c.img<<"i"<<endl;
}

istream &operator>>(istream &in,complex &c){
    cout<<"real:";
    in>>c.real;
    cout<<"imag: ";
    in>>c.img;
}

int main()
{
    complex c;
    cin>>c;
    cout<<c;
}
#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(int a,int b){
        real=a;
        img=b;
    }
    complex operator +(complex &c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

    void showdata(){
        cout<<real<<" +"<<img<<"i"<<endl;
    }
};

int main(){
    complex c(1,2);
    complex b(3,4);
    complex d;
    d=b+c;
    d.showdata();

}
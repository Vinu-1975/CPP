#include <bits/stdc++.h>
using namespace std;


class Polynomial{
    int a;
    string b;
    int c;
    public:
    Polynomial() : a(0), b("x"), c(0){}

    void set(int x,int y){
        a=x;
        c=y;
    }
    void get(){
        cout<<a<<b<<c;
    }
    Polynomial operator *(Polynomial p){
        Polynomial temp;
        temp.a=a*p.a;
        temp.b=b;
        temp.c=c+p.c;
        return temp;
    }

};

int main(){
    Polynomial p1,p2,p3;
    p1.set(2,3);
    p2.set(2,3);
    p3=p1*p2;
    p3.get();
}
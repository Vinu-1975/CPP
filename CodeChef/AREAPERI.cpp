#include<iostream>
using namespace std;

class rectangle{
    int l,b;
    public:
    rectangle(int x, int y){
        l=x;
        b=y;
    }
    int area(){
        return l*b;
    }
    int perimeter(){
        return 2*(l+b);
    }
    void msg(){
        if(area()>perimeter()){
            cout<<"Area\n";
        }else if(area()<perimeter()){
            cout<<"Peri\n";
        }else{
            cout<<"Eq\n";
        }
    }void result(){
        if(area()>perimeter()){
            cout<<area()<<endl;
        }else{
            cout<<perimeter()<<endl;
        }
    }
};

int main(){
    int l,b;
    cin>>l>>b;
    rectangle a(l,b);
    a.msg();
    a.result();
}
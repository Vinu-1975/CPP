//functions will have the same name but different definitions
//The invoked function would depend on the arguments you pass to the functions.
//area(5) for circle
//area(5,10) for rectangle

#include<iostream>
using namespace std;

class shape{
    public:
    double a;
    double b;
    float area(int r){
        return 3.141*r*r;
    }
    int area(int l,int r){
        return l*r;
    }
};

int main(){
    shape s1;
    s1.a=s1.area(5);
    s1.b=s1.area(5,6);
    cout<<s1.a<<endl;
    cout<<s1.b<<endl;
}
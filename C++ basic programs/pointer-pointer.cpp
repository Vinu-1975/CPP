#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p=&a;//stores the address of a
    int **q=&p;//stores the address of pointer p
    cout<<p<<endl;//prints adress of a
    cout<<*p<<endl;//prints value of a
    cout<<*q<<endl;//prints value of p(i.e.adress of a)
    cout<<**q<<endl;//prints value of *p(=a)
    cout<<q<<endl;//prints adress of pointer p
}
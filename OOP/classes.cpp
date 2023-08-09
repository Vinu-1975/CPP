#include<iostream>
using namespace std;

class BankAccount{
    public:
    void SayHi(){
        cout<<"Hi"<<endl;
    }
};

int main(){
    BankAccount test;
    test.SayHi();
}
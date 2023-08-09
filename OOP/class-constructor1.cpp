#include<iostream>
using namespace std;

class myClass{
    public:
    myClass(string n){
        setName(n);
    }void setName(string x){
        name=x;
    }string getName(){
        return name;
    }
    private:
    string name;
};

int main(){
    myClass ob1("Hey");
    myClass ob2(" vinayak");
    cout<<ob1.getName();
    cout<<ob2.getName();
    
}
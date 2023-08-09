#include<iostream>
using namespace std;

class myClass{
    public:
    void setName(string x){
        name=x;                             //Order of code doesnt matter in a class
        cout<<name;
    }
    private:
    string name;
};

int main(){
    myClass obj;
    obj.setName("vinayak");
    
}
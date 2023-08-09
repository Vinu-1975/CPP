#include<iostream>
using namespace std;

class myClass{
    public:
    void setName(string x){
        name=x;
    }string getName(){
        return name;
    }
    private:
    string name;
};

int main(){
    myClass nama;
    nama.setName("vinayakan");
    cout<<nama.getName();
}
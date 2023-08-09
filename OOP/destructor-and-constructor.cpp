#include<iostream>
using namespace std;

class myClass{
    public:
    myClass(){              //constructor->prints sthe statement each time when a new object is created
        cout<<"hey ";
    }void setName(string x){
        name=x;
    }string getName(){
        return name;
    }
    ~myClass();             //cdestructor->prints sthe statement each time when a new object is destroyed/after the execution of the program
    private:
    string name;
};

myClass :: ~myClass(){
    cout<<"\nThe end";
}

int main(){
    myClass obj;
    myClass jbo;
    //obj.setName("vina");
    //cout<<obj.getName();
}
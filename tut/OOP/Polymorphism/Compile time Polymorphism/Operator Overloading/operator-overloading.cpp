#include<iostream>
using namespace std;

class student{
public:
    string name;
    int age;
    bool gender;

    //defining the operator
    int operator == (student &s1){
        if(name == s1.name && age==s1.age && gender==s1.gender){
            return 1;
        }
        return 0;
    }
};



int main(){
    student s1;
    s1.name = "John";
    s1.age = 25;
    s1.gender=0;

    student s2;
    s2.name="John";
    s2.age=25;
    s2.gender=0;

    if(s1==s2){//operator overloading
        cout<<"same"<<endl;
    }else {
        cout<<"not same"<<endl;
    }
}
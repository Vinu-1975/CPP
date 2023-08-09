#include<iostream>
using namespace std;

bool check(int);

int main(){
    int age;
    cin>>age;
    if(check(age)){
        cout<<"you are an adult";
    }else{
        cout<<"you are still a minor";
    }
    return 0;
}

bool check(int a){
    if(a>=18){
        return true;
    }else{
        return false;
    }
}
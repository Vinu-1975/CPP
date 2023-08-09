#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int max;
    int min;
    if(n1>n2){
        max=n1;
        min=n2;
    }else{
        max=n2;
        min=n1;
    }
    cout<<"max:"<<max<<endl;
    cout<<"min:"<<min<<endl;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"non-prime";
            break;
        }
    }
    cout<<"prime";
    return 0;
}
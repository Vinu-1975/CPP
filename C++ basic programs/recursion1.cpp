#include<iostream>
using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=Sum(n-1);
    return n+prevsum;
}

int main(){
    int a;
    cin>>a;
    cout<<Sum(a)<<endl;
}
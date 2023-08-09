#include<iostream>
using namespace std;

int first_digit(int);

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,firstdigit=first_digit(N),lastdigit=N%10;
        cin>>N;
        cout<<firstdigit+lastdigit<<endl;

    }
    return 0;
}

int first_digit(int n){
    while(n>=10){
        n/=10;
    }
    return n;
}
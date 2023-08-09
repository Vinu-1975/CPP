#include<iostream>
using namespace std;

int binaryTodecimal(int);

int main(){
    int n;
    cin>>n;
    cout<<binaryTodecimal(n)<<endl;
    return 0;
}

int binaryTodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int l=n%10;
        ans+=x*l;
        x*=2;
        n/=10;
    }return ans;
}
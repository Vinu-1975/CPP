#include<bits/stdc++.h>s
using namespace std;

int octaTodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int l=n%10;
        ans+=x*l;
        x*=8;
        n/=10;
    }return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<octaTodecimal(n)<<endl;

    return 0;
}
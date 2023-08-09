#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int mx=INT_MIN;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx<<" ";
    }


}
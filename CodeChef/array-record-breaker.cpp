#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int rb=0;
    int mx=-19999;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
    }
    if(a[0]==mx){
        rb++;
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i+1]){
            rb++;
        }
    }if(a[0]!=mx){
        rb--;
    }cout<<rb<<endl;
}
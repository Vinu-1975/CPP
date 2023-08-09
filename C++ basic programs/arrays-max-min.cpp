#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=1;i<=n;i++){
        cin>>array[i];
    }
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=1;i<=n;i++){
        maxi=max(maxi,array[i]);
        mini=min(mini,array[i]);
    }cout<<"max:"<<maxi<<endl;
     cout<<"min:"<<mini<<endl;
     return 0;
}
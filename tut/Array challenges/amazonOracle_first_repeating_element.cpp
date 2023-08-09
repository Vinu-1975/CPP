/*

Problem:

Given an array arr[] of size N. The task is to find the first repeating element in the array of
integers,i.e., an element that occurs more than once and whose index of first occurrence is
smallest.

Constraints:

1<= N<=106
0<=Ai<= 106

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int minidx=INT_MAX;
    int idx[n];
    for(int i=0;i<n;i++){
        idx[i]=-1;
    }

    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            minidx=min(minidx,idx[i]);
        }else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<(-1)<<endl;
    }else{
        cout<<minidx+1<<endl;
    }
}
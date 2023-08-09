#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }int mx=-999999;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx<<endl;
}
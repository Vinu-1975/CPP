#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    int arr[T];
    for(int i=0;i<T;i++){
        cin>>arr[i];
    }
    sort(arr,arr+T);
    for(int i=0;i<T;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
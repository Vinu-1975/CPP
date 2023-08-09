#include<bits/stdc++.h>
using namespace std;

int main(){
    /**int arr[5]={10,20,30,40,50};
    int* p=arr;//we dont have to use '&' to get address
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;**/
    int n;
    cin>>n;
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<endl;
    }
}
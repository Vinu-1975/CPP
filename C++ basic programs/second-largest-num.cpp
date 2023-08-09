#include<bits/stdc++.h>
using namespace std;
/**
int main(){
    int T;
    cin>>T;
    while(T--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<arr[1]<<endl;
    }
}**/

int main(){
    int T;
    cin>>T;
    while(T--){
        int A,B,C;
        cin>>A>>B>>C;
        if(A>=B && B>=C || A<=B && B<=C){
            cout<<B<<endl;
        }else if(B>=A && A>=C || B<=A && A<=C){
            cout<<A<<endl;
        }else{
            cout<<C<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        int sum=0,k;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum>=x){
                k=i;
                break;
            }
        }if(sum>=x){
            cout<<k+1<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
}
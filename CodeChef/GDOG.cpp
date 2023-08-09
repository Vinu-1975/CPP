#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,result;
        cin>>n>>x;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,n%i);
        }
        cout<<mx<<endl;
    }
}
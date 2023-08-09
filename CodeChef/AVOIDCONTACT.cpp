#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f;
        cin>>n>>f;
        if(n==f){
            cout<<n+f-1<<endl;
        }else{
            cout<<(f*2)+(n-f)<<endl;
        }
    }
}
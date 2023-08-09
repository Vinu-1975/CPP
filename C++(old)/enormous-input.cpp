#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int i,t=n;
    int cnt=0;
    for( i=0;i<t;i++){
        cin>>n;
        if(n%k==0){
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}

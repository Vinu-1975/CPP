#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%10==0){
            cout<<0<<endl;
        }else{
            while(x%10!=0){
                if(x%10==5){
                    x=x*2;
                    cout<<"1"<<endl;
                }else{
                    cout<<-1<<endl;
                    break;
                }    
            }    
        }
    }
}
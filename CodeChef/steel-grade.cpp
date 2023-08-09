#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float h,c,t;
        cin>>h>>c>>t;
        if(h>50 && c<0.7 && t>5600){
            cout<<10;
        }else if(h>50 && c<0.7 && t<=5600){
            cout<<9;
        }else if(h<=50 && c<0.7 && t>5600){
            cout<<8;
        }else if(h>50 && c>=0.7 && t>5600){
            cout<<7;
        }else if(h>50 || c<0.7 || t>5600){
            cout<<6;
        }else{
            cout<<5;
        }
        cout<<endl;
    }
    return 0;
}
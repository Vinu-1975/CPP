#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float x;
        cin>>x;
        float c=0.143*x;
        float d=pow(c,x);
        if(d-floor(d)<0.5){
            cout<<floor(d)<<endl;
        }else{
            cout<<ceil(d)<<endl;
        }
    }
    return 0;
}
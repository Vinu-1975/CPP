#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=1;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        for(int j=2;j<sqrt(n);j++){
            if(n%j==0){
                c=c*j
            }
        }
    }cout<<c<<endl;
}
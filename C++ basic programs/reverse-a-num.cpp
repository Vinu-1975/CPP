#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    int reverse=0;
    while(T--){
        int N;
        cin>>N;
        
        while(N>0){
            int last_digit=N%10;
            reverse=(reverse*10)+last_digit;
            N/=10;
        }
        cout<<reverse;
    }
}
    
#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int f=1;
        for(int i=1;i<=N;i++){
            f=f*i;
        }cout<<f<<endl;
    }
}

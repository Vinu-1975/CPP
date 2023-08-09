#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter no. of rows"<<endl;
    cin>>m;
    cout<<"enter no. of colums"<<endl;
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1 || i==m){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
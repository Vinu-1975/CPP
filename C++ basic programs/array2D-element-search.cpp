#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int flag=false;
    int x;
    cin>>x;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==x){
                cout<<i+1<<" "<<j+1<<"\n";//position of the element
                flag==true;
            }
        }
    }
    if(flag){
        cout<<"element found!\n";
    }else{
        cout<<"element not found\n";
    }
    
}
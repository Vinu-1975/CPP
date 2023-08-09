/*1 1 1 1 1 
  2 2 2 2 
  3 3 3 
  4 4 
  5*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }return 0;
}
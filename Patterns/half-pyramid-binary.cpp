//1 
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1
#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int a=1,b=0;
    int temp;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)){//or (i+j)%2==0
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int d,n;
    cin>>d>>n;
    int sum=0;
    int sum1;
    int temp=n;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=temp;j++){
            sum+=j;
        }temp=sum;

        
    }cout<<sum<<endl<<temp;
}
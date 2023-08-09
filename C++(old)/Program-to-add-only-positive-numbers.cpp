#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter a no:";
    cin>>n;

    while(n>=0){
        sum+=n;
        cout<<"enter a no.:";
        cin>>n;
    }
    cout<<"\nThe sum is:"<<sum<<endl;
    return 0;
}











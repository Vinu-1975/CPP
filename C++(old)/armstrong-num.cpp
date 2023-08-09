#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a=0;
    int original=n;
    while(n>0){
        int l=n%10;
        a=a+(l*l*l);
        n=n/10;
    }
    if(a==original){
        cout<<a<<" IS an armstrong number"<<endl;
    }else{
        cout<<"NOT an armstrong number"<<endl;
    }
    return 0;

}
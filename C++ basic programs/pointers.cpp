#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<&a<<"\n";
    cout<<aptr<<"\n";
    cout<<*aptr<<endl;
    *aptr=21;
    cout<<a<<endl;
    cout<<++aptr<<endl;
}
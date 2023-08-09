#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    /*for loop
    
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }*/
    /*while loop
    
    int i=1;
    while(i<=n){
        cout<<i<<"";
        i++;
    }*/
    //do-while loop
    
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);
    return 0;
}
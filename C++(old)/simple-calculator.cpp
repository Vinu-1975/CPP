//simple calculator
#include<iostream>
using namespace std;

int main(){
    
    int n1;
    cout<<"n1:";
    cin>>n1;
    
     int n2;
    cout<<"n2:";
    cin>>n2;
    
    char op;
    cout<<"enter an operator:";
    cin>>op;
    
   
    
    switch(op)
    {
    case '+':
        cout<<n1 + n2<<endl;
        break;
    case '-':
        cout<<n1 - n2<<endl;
        break;
    case '*':
        cout<<n1 * n2<<endl;
        break;
    case '/':
        cout<<n1 / n2<<endl;
        break;
    default:
    cout<<"invalid operator!"<<endl;
    }
    return 0;
}
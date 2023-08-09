#include<iostream>
using namespace std;

bool Palindrom(int x){
    int rev=0;
    int m=x;
    while(x>0){
        int l=x%10;
        rev=(rev*10)+l;
        x=x/10;
    }
    if(rev==m){
        return true;
    }else{
        return false;
    }
}

int main(){

    int n;
    cin>>n;
    bool result=Palindrom(n);
    if(result==true){
        cout<<n<<" is a palindrome"<<endl;
    }else{
        cout<<n<<" is not a palindrome"<<endl;
    }
    
}
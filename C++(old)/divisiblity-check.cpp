//to check if a number is either divisisible by 2 or 3
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;

    if((n%2==0)&&(n%3==0)){
        cout<<"divisible by 2 and 3";
    }else if((n%2==0)||(n%3==0)){
        if(n%2==0){
            cout<<"divible by 2";
        }else{
            cout<<"divisible by 3";
        }
    }else{
        cout<<"not divisibl by both 2 and 3";
    }
    return 0;
}
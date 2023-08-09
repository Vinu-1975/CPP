/**to check if a given triangle is equilateral,isosceles or scalene**/
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b and a==c){
        cout<<"equilateral";
    }else if(a==b or b==c or a==c){
        cout<<"isosceles";
    }else{
        cout<<"scalene";
    }
    return 0;
}
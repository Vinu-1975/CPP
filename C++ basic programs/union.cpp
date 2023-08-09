#include<iostream>
using namespace std;

//unions saves more memory than struct
union price{
    int m;
    char n;
    float o;
};

int main(){
    union price vinayak;
    vinayak.m=77;
    vinayak.n='h';
    cout<<vinayak.m<<endl;//garbage value 
    cout<<vinayak.n<<endl;;    
}
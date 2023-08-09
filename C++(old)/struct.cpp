#include<iostream>
using namespace std;

struct student{
    int rollno;    //member variables
    char gender;
}vinayak,aswin;

int main(){
    student sidhu,lazim;
    lazim={112,'f'};
    
    sidhu.rollno=113;
    sidhu.gender='f';

    vinayak.rollno=111;
    vinayak.gender='m';
    
    cout<<lazim.rollno<<endl;
    cout<<vinayak.rollno<<endl;
    cout<<sidhu.rollno<<endl;
    cout<<lazim.gender<<endl;
    cout<<vinayak.gender<<endl;
    cout<<sidhu.gender<<endl;
}
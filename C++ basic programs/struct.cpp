#include<iostream>
using namespace std;

typedef struct student
{
    int roll;
    char fname;
}ep;

int main(){
    ep vinayak;
    vinayak.roll=1009964;
    vinayak.fname='V';
    cout<<vinayak.roll<<endl;
    cout<<vinayak.fname<<endl;

}
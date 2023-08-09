#include<iostream> 
using namespace std;

/*int main(){
    char grade;
    cin>>grade;

    switch(grade){
        case 'A'://same statement for two values
        case 'a':
            cout<<"excellent";
            break;
        case 'B':
            cout<<"very good";
            break;
        case 'C':
            cout<<"good";
            break;
        case 'D':
            cout<<"not bad";
            break;
    default:
        cout<<"invalid grade";
    }
    cout<<endl<<"done grading";
    return 0;

}*/
//using range in switch 
int main(){
    int x;
    cin>>x;

    switch(x){
        case 1 ... 100:
            cout<<"A";
            break;
        case 101 ... 200:
            cout<<"B";
            break;
        case 201 ... 300:
            cout<<"C";
            break;     
    }
}
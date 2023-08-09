//a robot says hello in different languages.
#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"enter a character:";
    cin>>button;

    switch(button){
        case 'a':
            cout<<"hello"<<endl;
            break;
        case 'b':
            cout<<"namaste"<<endl;
            break;
        case 'c':
            cout<<"ciao"<<endl;
            break;
        case 'd':
            cout<<"hola"<<endl;
            break;
        case 'e':
            cout<<"konichiwa"<<endl;
            break;
    default:
    cout<<"i'm still learning"<<endl;
    break;
    }
    return 0;
}
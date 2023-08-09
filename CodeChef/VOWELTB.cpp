#include<iostream>
using namespace std;

class vowel{
    char c;
    public:
    vowel(){
        cout<<"enter character: "<<endl;
        cin>>c;
        switch (c)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<"Vowel"<<endl;
            break;
        default:
            cout<<"Consonant"<<endl;
            break;
        }
    }
};

int main(){
    vowel();

}
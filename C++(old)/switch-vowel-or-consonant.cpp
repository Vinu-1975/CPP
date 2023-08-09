//to check wheter a character is a vowel or consonant
#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"enter a character:";
    cin>>c;

    switch(c)
    {
    case 'a':
        cout<<"vowel";
        break;
    case 'e':
        cout<<"vowel";
        break;
    case 'i':
        cout<<"vowel";
        break;
    case 'o':
        cout<<"vowel";
        break;
    case 'u':
        cout<<"vowel";
        break;
    default:
        cout<<"consonant";
    }
    return 0;
}
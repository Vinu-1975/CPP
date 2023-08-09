#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "vinayak is a good guy";
    string bb[5];
    string word[5];
    int temp = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a.at(i) != ' ')
        {
            word[temp] = word[temp] + a[i];
        }
        else
        {
            temp++;
        }
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << word[i] <<endl;
    // }
    for(auto x: a){
        cout<<x<<endl;
    }
}

#include<iostream>
#include<stack>
using namespace std;

bool ispar(string x){
    stack<char> c;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '(' || x[i] == '[' || x[i] == '{')
        {
            c.push(x[i]);
        }
        else if (!c.empty() && (x[i] == ')' && c.top() == '(' || x[i] == ']' && c.top() == '[' || x[i] == '}' && c.top() == '{'))
        {
            c.pop();
        }
        else
        {
            return false;
        }
    }
    return c.empty();
    // stack<char> st;
    // for (int i = 0; i < x.length(); i++)
    // {
    //     if (x[i] == '(' || x[i] == '{' || x[i] == '[')
    //     {
    //         st.push(x[i]);
    //     }
    //     else if (!st.empty() && (x[i] == ')' && st.top() == '(' || x[i] == '}' && st.top() == '{' || x[i] == ']' && st.top() == '['))
    //     {
    //         st.pop();
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }
    // return st.empty();
}


int main(){
    string s;
    cin>>s;
    bool ans=ispar(s);
    cout<<ans;
}
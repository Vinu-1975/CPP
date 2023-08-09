#include<bits/stdc++.h>
using namespace std;

// * All operations are O(1) time complexity

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;

    st.emplace(5);
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;

    cout<<st.size()<<endl;

    cout<<st.empty()<<endl;

    stack<int>st2;
    st.swap(st2);
    cout<<st2.top()<<endl;


}
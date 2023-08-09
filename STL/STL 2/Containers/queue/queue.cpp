#include<bits/stdc++.h>
using namespace std;
// * All operations are O(1) time complexity

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back() += 6;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    //? size,swap,empty are same as stack
}
#include<bits/stdc++.h>
using namespace std;

// ! A doubly linked list is maintained for list unlike vectors

int main(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    // * inserting in front is cheaper in list while
    // * in vectors, its expensive

    ls.push_front(5);
    ls.emplace_front(6);

    for(auto it:ls){
        cout<<it<<" ";
    }

    // ? begin,end,rbegin,rend,clear,insert,size,swap.....
}
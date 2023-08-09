#include<bits/stdc++.h>
using namespace std;

void printDQ(deque<int> &dq){
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(0);
    dq.emplace_front(-1);

    printDQ(dq);

    dq.pop_back();
    printDQ(dq);
    dq.pop_front();
    printDQ(dq);

    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;

    //? begin,end,rbegin,rend,clear,insert,size,swap

}
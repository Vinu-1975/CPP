#include<bits/stdc++.h>
using namespace std;
// * A Tree is maintained
int main(){
    priority_queue<int> pq; // ! MaxHeap by default

    pq.push(5); //* O(log n)
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top()<<endl; //* O(1)  prints the highest ele

    pq.pop(); //* O(log n)
    cout<<pq.top()<<endl;

    priority_queue<int,vector<int>,greater<int>> pq1;//! MinHeap
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.emplace(10);

    cout<<pq1.top()<<endl;

}
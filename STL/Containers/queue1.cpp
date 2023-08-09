#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"q : ";
    display(q);

    cout<<"front(): "<<q.front()<<endl;
    cout<<"back(): "<<q.back()<<endl;
    cout<<"size(): "<<q.size()<<endl;
    cout<<"empty(): "<<q.empty()<<endl;
    cout<<"pop(): ";//deletes 10
    q.pop();display(q);
    cout<<"emplace():";
    q.emplace(100);
    display(q);
}
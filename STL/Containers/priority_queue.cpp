#include<iostream>
#include<queue>
using namespace std;

void display(priority_queue<int> q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    priority_queue<int> q;   //max heap 
    q.push(1);
    q.push(100);
    q.push(20);
    q.push(80);
    q.push(45);
    cout<<"q : ";
    display(q);
    
    cout<<"size() :"<<q.size()<<endl;
    cout<<"pop() :";q.pop();
    display(q);

    priority_queue<int,vector<int>,greater<int>> q2;
}
#include<bits/stdc++.h>
using namespace std;

struct Queue{
    stack<int> s1,s2;
    void Enqueue(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int Dequeue(){
        if(s1.empty()){
            cout<<"Queue empty"<<endl;
            exit(0);
        }
        int x=s1.top();
        s1.pop();
        return x;
    }
};

int main(){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);

    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
}
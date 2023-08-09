#include<iostream>
#include<list>
using namespace std;

void display(list <int> g){
    list<int>::iterator it;
    for(it=g.begin();it!=g.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l;
    l.push_back(5);
    l.push_back(6);
    l.push_front(3);
    display(l);
    l.pop_front();
    display(l);
    l.pop_back();
    display(l);
    l.push_back(7);
    l.push_back(17);
    l.push_back(27);
    l.push_back(37);
    l.push_back(1);
    l.push_back(2);
    l.push_back(2);
    l.push_back(2);
    display(l);
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    cout<<l.size()<<endl;
    l.sort();
    display(l);
    l.unique();
    display(l);
}
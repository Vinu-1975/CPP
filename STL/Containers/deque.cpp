#include<iostream>
#include<deque>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;

void display(deque<int> d){
    while(!d.empty()){
        cout<<d.front()<<" ";
        d.pop_front();
    }
    cout<<endl;
}

int main(){
    deque<int> d;
    d.push_back(4);
    d.push_back(5);
    
    d.push_front(3);
    d.push_front(2);
    d.push_front(1);

    display(d);
    cout<<"size: "<<d.size()<<endl;
    cout<<"max_size: "<<d.max_size()<<endl;
    cout<<"popFront: ";d.pop_front();
    display(d);
    cout<<"popBack: ";d.pop_back();
    display(d);
    cout<<"front: "<<d.front()<<endl;
    cout<<"back : "<<d.back()<<endl;
    
    deque<int>::iterator it;
    cout<<"iterators:"<<endl;
    cout<<"begin and end :"<<endl;
    for(it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"rbegin and rend"<<endl;
    for(auto it=d.rbegin();it!=d.rend();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
    cout<<"insert:";
    d.insert(d.begin()+2,50);
    display(d);

    cout<<"To insert a vector inside dequeue:";
    vector<int> v(2,10);
    d.insert(d.begin(),v.begin(),v.end());
    display(d);

    cout<<"assign:";
    deque<int> b;
    b.assign(5,7);//insert five 7s;
    display(b);
    
    cout<<"clear:";
    b.clear();
    display(b);

    cout<<"erase: ";
    cout<<endl;
    b.assign(10,5);
    display(b);
    b.erase(b.begin());
    display(b);

    cout<<"at():"<<d.at(1);
    cout<<endl;
    display(d);

}
#include<vector>
#include<iostream>
#include<iterator>
using namespace std;

int main(){
    vector<int> a;
    vector<int>::iterator it;
    a.push_back(5);
    a.push_back(15);
    a.push_back(25);
    a.push_back(35);
    a.push_back(45);
    a.push_back(55);
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"size() : "<<a.size()<<endl;
    cout<<"max_size() : "<<a.max_size()<<endl;
    cout<<"capacity() : "<<a.capacity()<<endl;
    cout<<"at() : "<<a.at(0)<<endl;
    cout<<"front() : "<<a.front()<<endl;
    cout<<"back() : "<<a.back()<<endl;
    cout<<"assign() :";
    a.assign(3,2);
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
}
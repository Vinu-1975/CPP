#include<iostream>
#include<set>
#include<iterator>
using namespace std;

void display(set<int> s){
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void display(set<int,greater<int>> s)
{
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);//set contains only unique values
    display(s);

    // Set Sorted in Descending Order
    set<int,greater<int>> a;
    a.insert(10);
    a.insert(20);
    a.insert(30);
    a.insert(40);
    display(a);
    cout<<"erase:";
    a.erase(20);
    display(a);
    a.erase(a.begin());
    display(a);
    a.insert(100);
    a.insert(200);
    a.insert(300);
    display(a);
    cout<<"find: ";
    auto pos=a.find(200);
    cout<<&pos<<endl;
    display(a);


}
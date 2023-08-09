#include<iostream>
#include<stack>
using namespace std;

/*

The push() function adds a new element to the container. It accepts a variable of the type of the element and adds it.

The emplace() function accepts the arguments required for creating a new object and 
adds a newly created object to your container. Thus, the constructor is called to create a new object for addition.
*/

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(0);
    s.push(2);
    s.push(6);
    cout<<"s : ";
    display(s);
    cout<<"size : "<<s.size()<<endl;

    stack<int> a;
    a.push(5);
    a.push(7);
    a.push(6);
    a.push(4);
    cout<<"a : ";
    display(a);
    s.swap(a);

    cout<<"After Swap() :"<<endl;
    cout << "s : ";
    display(s);
    cout << "a : ";
    display(a);

    stack<int> b;
    b.emplace(1);
    b.emplace(0);
    b.emplace(2);
    b.emplace(6);
    cout<<"b : ";
    display(b);
}
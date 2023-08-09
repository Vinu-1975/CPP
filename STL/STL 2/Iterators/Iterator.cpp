#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    vector<int>::iterator it;
    it = v.begin();

    for(;it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}
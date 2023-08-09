#include<iostream>
#include<map>
#include<iterator>
using namespace std;

void display(map<string,int> m){
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
}

int main(){
    map<string,int> m;
    m["one"]=1;
    m["two"]=2;
    m["three"]=3;
    display(m);
}
#include<bits/stdc++.h>
using namespace std;

class Hash{
    int bucket;
    list<int> *table;
    public:
    Hash(int v){
        this->bucket=v;
        table=new list<int>[bucket];
    }
    int hashFunction(int x){
        return x%bucket;
    }
    void insertItem(int x){
        int index=hashFunction(x);
        table[index].push_back(x);
    }
    void deleteItem(int x){
        int index=hashFunction(x);
        list<int>::iterator it;
        for(it=table[index].begin();it!=table[index].end();it++){
            if(*it==x){
                break;
            }
        }
        if(it!=table[index].end()){
            table[index].erase(it);
        }
    }
    void displayHash(){
        for(int i=0;i<bucket;i++){
            cout<<i;
            for(auto x : table[i]){
                cout<<"-->"<<x;
                cout<<endl;
            }
        }
    }
};

int main(){
    int a[]={15,11,27,8,12};
    int n=sizeof(a)/sizeof(a[0]);

    Hash h(7);
    for(int i=0;i<n;i++){
        h.insertItem(a[i]);
    }
    h.deleteItem(12);
    h.displayHash();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
    for(auto item:v){
        cout<<item<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v={1,2,3,4,5};
    v.erase(v.begin());
    print_vector(v);
    v.emplace_back(1);
    print_vector(v);
    v.erase(v.begin()+1,v.begin()+3);
    print_vector(v);

    v.clear();

     v = {1,34,53,3};
     print_vector(v);
     v.insert(v.begin(),300);
     print_vector(v);

     v.insert(v.begin()+1,2,301);
     print_vector(v);

     vector<int> copy(2,302);
     v.insert(v.begin()+3,copy.begin(),copy.end());
     print_vector(v);

     v.pop_back();
     print_vector(v);

     // TODO: v.swap(v2);

     cout<<v.empty()<<endl;

     v.clear();

     cout<<v.empty()<<endl;
}
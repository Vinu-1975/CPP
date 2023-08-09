#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }// 1 2

    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }//1 2

    cout<<endl;
    for(auto element:v){
        cout<<element<<" ";
    }//1 2

    v.pop_back();// removes the last element from the vector
    //1

    vector<int> v2 (3,50);//(size,value)
    vector<int> v3 ({2,4,5,3,57});
    //will create a vector of size 3 which had values '50'

    cout<<endl;
    for (auto element : v2)
    {
        cout << element << " ";
    }//50 50 50

    // to swap values of two vectors
    swap(v,v2);

    sort(v2.begin(),v2.end());
}
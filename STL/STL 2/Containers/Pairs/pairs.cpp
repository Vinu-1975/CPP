#include<iostream>
using namespace std;

int main(){
    pair<int,string> p = {1,"Vinayakan"};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,string>> q = {1,{2,"Vinayakan"}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int,int> arr[] = {{1,2},{2,3},{3,4}};
    for(auto x:arr){
        cout<<x.first<<" "<<x.second<<endl;
    }

    pair<int,string> a = make_pair(3,"Three");
    cout<<a.first<<" "<<a.second<<endl;
}
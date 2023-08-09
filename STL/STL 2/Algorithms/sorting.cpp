#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,5,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);// * array
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> v={1,5,3,2};
    sort(v.begin(),v.end());// * vectors
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // todo: for descending order

    sort(v.rbegin(),v.rend());
    // todo: or
    sort(v.begin(),v.end(),greater<int>());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
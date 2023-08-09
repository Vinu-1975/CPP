#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="3566712";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;

}
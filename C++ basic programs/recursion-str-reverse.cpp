#include<iostream>
#include<string>
using namespace std;

string Reverse(string s){
    int l;
    l=s.length();
    string s2="";
    for(int i=0;i<l;i++){
        s2=s2+s[l-i-1];
    }
    return s2;
}

string Reverse(string s,int l){
    if (l==0)
    return s2;
}

int main(){
    string s;
    cin>>s;
    int l=s.length();
    string ns=Reverse(s,l);
    cout<<ns;

}
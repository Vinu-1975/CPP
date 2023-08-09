#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string s="vinayakan";
    //convert into uppercase
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }cout<<s<<endl;
    //convert to lower case
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }cout<<s<<endl;
}
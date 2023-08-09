#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string s="ouytrhjkkh";
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    char ans='a';
    int maxfreq=0;
    
    for(int i=0;i<26;i++){
        if(arr[i]>maxfreq){
            maxfreq=arr[i];
            ans=i+'a';
        }
    }cout<<maxfreq<<" "<<ans<<endl;
}
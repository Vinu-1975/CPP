#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="dkdjgiojegioejkgks";
    int freq[26];

    for(int i=0;i<26;i++){

        freq[i]=0;
    }

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    char ans='a';
    int Mfreq=0;

    for(int i=0;i<26;i++){
        if(freq[i]>Mfreq){
            Mfreq=freq[i];
            ans=i+'a';
        }
        
    }
    cout<<Mfreq<<" "<<ans<<endl;
}
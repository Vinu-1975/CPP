#include<bits/stdc++.h>
#include<strings.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int l=s.length();
        string a,b;
	    if(l%2==0){
	        for(int i=0;i<l/2;i++){
                a+=s[i];
            }for(int i=l/2;i<l;i++){
                b+=s[i];
            }
	    }else{
            for(int i=0;i<l/2;i++){
                a+=s[i];
            }for(int i=l/2+1;i<l;i++){
                b+=s[i];
            }
        }sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b){
            cout<<"YES"<<endl;
        }else{
             cout<<"NO"<<endl;
        }
	}
	return 0;
}
